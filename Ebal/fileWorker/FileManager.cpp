#include "FileManager.h"

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


	FileManager::list<BookShop>readFromFile() {
		list<BookShop> books;
		BookShop book;
		while (!file.eof()) {
			ofile >> book;
			books.push_back(book);
		}
	}


	void FileManager::writeFromFile(list<BookShop> books) {
		for (BookShop book : books) {
			ifile << book;
		}
	}

};