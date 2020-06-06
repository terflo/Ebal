#pragma once
//
// Created by Nik on 06.06.2020.
//

#include <string>

using namespace std;

class Book {
private:
    string name;
    string author;
    int price;

public:
    Book();
    Book(string name, string author, int price);
    ~Book();
    void setName(string name);
    void setAuthor(string author);
    void setPrice(int price);
    string getName();
    string getAuthor();
    int getPrice();
    string toString();
};

inline Book::Book()
{
	this->name = "";
	this->author = "";
	this->price = 0;
}

inline Book::Book(string name, string author, int price)
{
	this->name = name;
	this->author = author;
	this->price = price;
}

inline Book::~Book()
{
}

inline void Book::setName(string name)
{
	this->name = name;
}

inline void Book::setAuthor(string author)
{
	this->author = author;
}

inline void Book::setPrice(int price)
{
	this->price = price;
}

inline string Book::getName()
{
	return this->name;
}

inline string Book::getAuthor()
{
	return this->author;
}

inline int Book::getPrice()
{
	return this->price;
}

inline string Book::toString()
{
	return string(this->getName() + ':' + this->getAuthor() + ':' + to_string(this->getPrice()) + '\n');
}
