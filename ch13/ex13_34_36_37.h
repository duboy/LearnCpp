#include <iostream>
#include <set>
#include <string>

class Message;
class Folder
{
public:
	Folder() = default;
	Folder(const Folder &);
	Folder &operator=(const Folder &);
	~Folder();
	
	void addMsg(Message *);
	void remMsg(Message *);
private:
	std::set<Message *> messages;
	void add_to_Message(const Folder &);
	void remove_from_Message();
};
class Message
{
	friend class Folder;
	friend void swap(Message &, Message &);
public:
	explicit Message(const std::string &str = "") : //what's the benefit of explicit?
		contents(str) { }
	Message(const Message &);
	Message &operator=(const Message &);
	~Message();
	
	void save(Folder &);
	void remove(Folder &);
	
private:
	std::string contents;
	std::set<Folder*> folders;
	
	void add_to_Folders(const Message &);
	void remove_from_Folders();
};
void Message::save(Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.remMsg(this);
}
void Message::add_to_Folders(const Message &m)
{
	for (auto f : m.folders)
		f->addMsg(this);
}
void Message::remove_from_Folders()
{
	for (auto f : folders)
		f->remMsg(this);
}
Message::Message(const Message &m) :
	contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}
Message::~Message()
{
	remove_from_Folders();
}
Message &Message::operator=(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folders(rhs);
	return *this;
}
void swap(Message &lhs, Message &rhs)
{
	using std::swap; //why doesn't need.
	for (auto f : lhs.folders)
		f->remMsg(&lhs);
	for (auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	
	for (auto f : lhs.folders)
		f->addMsg(&lhs);
	for (auto f : rhs.folders)
		f->addMsg(&rhs);
}

// class Folder
// {
// public:
	// Folder() = default;
	// Folder(const Folder &);
	// Folder &operator=(const Folder &);
	// ~Folder();
	
	// Folder &addMsg(Message &);
	// Folder &remMsg(Message &);
// private:
	// std::set<Message *> messages;
	// void add_to_Message(const Folder &);
	// void remove_from_Message()
// };
Folder::Folder(const Folder &f) : messages(f.messages)
{
	add_to_Message(f);
}
void Folder::add_to_Message(const Folder &f)
{
	for (auto m : f.messages)
		m->save(*this); //会不会重复insert 了一次？
}
void Folder::remove_from_Message()
{
	for (auto m : messages)
	{
		m->remove(*this);
	}
}
void Folder::addMsg(Message *m)
{
	messages.insert(m);
}
void Folder::remMsg(Message *m)
{
	messages.erase(m);
}
Folder::~Folder()
{
	remove_from_Message();
}