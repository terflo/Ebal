#include "FileManager.h"

#define Object Object

class FileManager {

	FileManager::FileManager() {
		ifile.open("Books.bin", ios::binary | ios::in);
		ofile.open("Books.bin", ios::binary | ios::out);
		if (!ifile || !ofile) {
			cout << "Файл не был создан из-за неизвестной ошибки!";
		}
	}


	FileManager::~FileManager() {
		ofile.close();
		ifile.close();
	}


	FileManager::list<Object>readFromFile() {
		list<BookShop> books;
		BookShop book;
		while (!file.eof()) {
			ofile >> book;
			books.push_back(book);
		}
	}


	void FileManager::writeFromFile(list<Object> books) {
		for (BookShop book : books) {
			ifile << book;
		}
	}

};