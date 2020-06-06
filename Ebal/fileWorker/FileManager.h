#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include "../containers/List.h"
#include "../sourceClasses/BookShop.h"
#include "../sourceClasses/Book.h"
#include "../Test/TestObject.h"

using namespace std;

class FileManager {
private:
	ifstream ifile;
	ofstream ofile;

public:
	FileManager();

	~FileManager();

	List<BookShop> readFromFile();

	void writeFromFile(List<BookShop> books);
};

inline FileManager::FileManager()
{

}

inline FileManager::~FileManager()
{

}

inline List<BookShop> FileManager::readFromFile()
{
	ifile.open("file.csv", ios::in);
	if (!ifile) {
		cout << "Файл не доступен!" << endl;	//todo: переделать
		return List<BookShop>();
	}
	size_t pos = 0;
	const string delimetr1 = ",";
	const string delimetr2 = "@";
	string buffer1;
	string buffer2;
	while (getline(ifile, buffer1)) {
		while ((pos = buffer1.find(delimetr2)) != std::string::npos) {
			buffer2 = buffer1.substr(0, pos);
			buffer1.erase(0, pos + delimetr2.length());
		}
	}
	ofile.close();
	return List<BookShop>();
}

inline void FileManager::writeFromFile(List<BookShop> books) {
	ofile.open("file.csv", ios::out);
	if (!ofile) {
		cout << "Файл не доступен!" << endl;	//todo: переделать
	}
	
	ofile.close();
}

