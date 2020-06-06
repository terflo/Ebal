#pragma once
//
// Created by Nik on 05.06.2020.
//
#include <string>
#include "Book.h"
#include "../containers/List.h"

class BookShop {
private:
	List<Book> bookList;
	string name;
public:
	BookShop(string name);		//TODO:Добавить addAll(List<Book> books)
	BookShop();
	~BookShop();
	string getName();
	string toString();
	void addBook(Book book);
	bool operator ==(BookShop bookShop);
	bool operator != (BookShop bookShop);
};

inline BookShop::BookShop(string name) {
	this->name = name;
}

inline BookShop::BookShop()
{
}

inline BookShop::~BookShop()
{
}

inline string BookShop::getName()
{
	return string();
}

inline string BookShop::toString()
{
	string str = this->getName() + ": ";
	for (size_t i = 0; i < bookList.getSize(); i++) {
		str += bookList.get(i).toString() + ", ";
	}
	return str + '\n';
}

inline void BookShop::addBook(Book book)
{
	bookList.push_back(book);
}

inline bool BookShop::operator==(BookShop bookShop) {
	return this->name == bookShop.getName();
}

bool BookShop::operator!=(BookShop bookShop)
{
	return this->name != bookShop.getName();
}
