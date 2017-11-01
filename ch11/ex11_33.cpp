#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

map<string, string> bulit_map (ifstream &mapFile)
{
	map<string, string> wordMap;
	string key, value;
	while (mapFile >> key && getline (mapFile, value))
	{
		wordMap[key] = value.substr(1);
	}
	
	return wordMap;
}

void transform (string &word, map<string, string> wordMap)
{
	if (wordMap.find (word) != wordMap.end())
		cout << wordMap[word] << " ";
	else
		cout << word << " ";
}
void word_transform (ifstream &mapFile, ifstream &tranFile)
{
	map<string, string> wordMap;
	wordMap = bulit_map (mapFile);
	
	string lines;
	while (getline (tranFile, lines))
	{
		istringstream line(lines);
		string word;
		while (line >> word)
		{
			transform (word, wordMap);
		}
		cout << endl;
	}
}

int main ()
{
	string mapFileName ("..\\data\\word_transformation.txt");
	string transFileName ("..\\data\\given_to_transform.txt");
	ifstream mapFile (mapFileName);
	ifstream tranFile (transFileName);
	
	word_transform (mapFile, tranFile);
}