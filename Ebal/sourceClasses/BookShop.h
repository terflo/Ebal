#pragma once
//
// Created by Nik on 05.06.2020.
//
#include <string>
#include <vector>
#include "Book.h"

class BookShop {
private:
	vector<Book> bookList;
	char name[255] = {0};

public:
	BookShop(string name);
	BookShop(string name, vector<Book> bookList);
	BookShop();
	~BookShop();
	void addAll(vector<Book> books);
	void deleteBooks();
	string getName();
	string toString();
	void setName(string name);
	void addBook(Book book);
	int bookCount();
	vector<Book> getBookVector();
	bool operator ==(BookShop bookShop);
	bool operator != (BookShop bookShop);
};

inline BookShop::BookShop(string name) {
	for (size_t i = 0; i < name.size(); i++) {
		this->name[i] = name.at(i);
	}
	this->name[name.size() + 1] = '\0';
}

inline BookShop::BookShop(string name, vector<Book> bookList)
{
	for (size_t i = 0; i < name.size(); i++) {
		this->name[i] = name.at(i);
	}
	this->name[name.size() + 1] = '\0';
	this->bookList = bookList;
}

inline BookShop::BookShop()
{
}

inline BookShop::~BookShop()
{
	bookList.clear();
}

inline void BookShop::addAll(vector<Book> books)
{
	bookList.clear();
	this->bookList = books;
}

inline void BookShop::deleteBooks()
{
	bookList.clear();
}

inline string BookShop::getName()
{
	return string(this->name);
}

inline string BookShop::toString()
{
	string str = getName() + ": ";
	for (size_t i = 0; i < bookList.size(); i++) {
		str += bookList.at(i).toString() + ", ";
	}
	str.erase(str.length() - 2, 2);
	return str;
}

inline void BookShop::setName(string name)
{
	for (size_t i = 0; i < name.size(); i++) {
		this->name[i] = name.at(i);
	}
	this->name[name.size() + 1] = '\0';
}

inline void BookShop::addBook(Book book)
{
	bookList.push_back(book);
}

inline int BookShop::bookCount()
{
	return bookList.size();
}

inline vector<Book> BookShop::getBookVector()
{
	return this->bookList;
}

inline bool BookShop::operator==(BookShop bookShop) {
	return string(this->name) == bookShop.getName();
}

bool BookShop::operator!=(BookShop bookShop)
{
	return string(this->name) != bookShop.getName();
}
