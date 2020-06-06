#pragma once
//
// Created by Nik on 06.06.2020.
//

#include <string>

using namespace std;

class Book {
private:
	char name[255] = {0};
	char author[255] = {0};
    int price = 0;

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
}

inline Book::Book(string name, string author, int price)
{
	for (size_t i = 0; i < name.size(); i++) {
		this->name[i] = name.at(i);
	}
	this->name[name.size() + 1] = '\0';
	for (size_t i = 0; i < author.size(); i++) {
		this->author[i] = author.at(i);
	}
	this->author[author.size() + 1] = '\0';
	this->price = price;
}

inline Book::~Book()
{
}

inline void Book::setName(string name)
{
	for (size_t i = 0; i < name.size(); i++) {
		this->name[i] = name.at(i);
	}
	this->name[name.size() + 1] = '\0';
}

inline void Book::setAuthor(string author)
{
	for (size_t i = 0; i < author.size(); i++) {
		this->author[i] = author.at(i);
	}
	this->author[author.size() + 1] = '\0';
}

inline void Book::setPrice(int price)
{
	this->price = price;
}

inline string Book::getName()
{
	return string(this->name);
}

inline string Book::getAuthor()
{
	return string(this->author);
}

inline int Book::getPrice()
{
	return this->price;
}

inline string Book::toString()
{
	return string(this->getName() + ':' + this->getAuthor() + ':' + to_string(this->getPrice()));
}
