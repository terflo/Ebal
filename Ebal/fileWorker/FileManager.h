#pragma once
#pragma warning(disable:4996)

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <conio.h>
#include "../sourceClasses/BookShop.h"
#include "../sourceClasses/Book.h"

using namespace std;

class FileManager {
private:
	ifstream ifile;
	ofstream ofile;

public:
	FileManager();

	~FileManager();

	vector<BookShop> readFromFile();

	void writeToFile(vector<BookShop> books);
};

inline FileManager::FileManager()
{

}

inline FileManager::~FileManager()
{

}

inline vector<BookShop> FileManager::readFromFile()
{
	ifile.open("file.csv", ios::in);
	if (!ifile) {
		cout << "Файл не доступен!" << endl;
		return vector<BookShop>();
	}
	string buffer;
	string authorBook;
	string nameBook;
	string nameBookShop;
	int price = 0;
	vector<BookShop> vec;
	vector<string> vecbuffer;
	vector<Book> vecbooks;
	while (ifile.good()) {
		getline(ifile, buffer, '@');
		nameBookShop = buffer;
		buffer = "";
		getline(ifile, buffer);
		size_t prev = 0;
		size_t next;
		while ((next = buffer.find('#', prev)) != string::npos) {
			string tmp = buffer.substr(prev, next - prev);
			vecbuffer.push_back(tmp);
			prev = next + 1;
		}
		for (string str : vecbuffer) {
			size_t iterations = 0;
			prev = 0;
			while ((next = str.find(',', prev)) != string::npos) {
				string tmp = str.substr(prev, next - prev);
				switch (iterations) {
				case 0:
					authorBook = tmp;
					break;
				case 1:
					nameBook = tmp;
					break;
				case 2:
					price = atoi(tmp.c_str());
					break;
				}
				prev = next + 1;
				iterations++;
			}
			vecbooks.push_back(Book(nameBook, authorBook, price));
		}
		vec.push_back(BookShop(nameBookShop,vecbooks));
		vecbuffer.clear();
		vecbooks.clear();
	}
	return vec;
}

inline void FileManager::writeToFile(vector<BookShop> books) {
	ofile.open("file.csv", ios::out);
	if (!ofile) {
		cout << "Файл не доступен!" << endl;
		return;
	}
	for (size_t i = 0; i < books.size(); i++) {
		ofile << books.at(i).getName() << '@';
		vector<Book> vec = books.at(i).getBookVector();
		for (size_t j = 0; j < vec.size(); j++) {
			ofile << vec.at(j).getAuthor() << ',' << vec.at(j).getName() << ',' << to_string(vec.at(j).getPrice()) << ',' <<'#';
		}
		ofile << '\n';
	}
	ofile.close();
}


vector <pair<string, vector<string>>> vec;
