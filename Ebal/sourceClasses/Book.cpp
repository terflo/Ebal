//
// Created by Nik on 06.06.2020.
//

#include "Book.h"

Book::Book()
{
	this->name = "";
	this->author = "";
	this->price = 0;
}

Book::Book(string name, string author, int price)
{
	this->name = name;
	this->author = author;
	this->price = price;
}

Book::~Book()
{
}

void Book::setName(string name)
{
	this->name = name;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

void Book::setPrice(int price)
{
	this->price = price;
}

string Book::getName()
{
	return this->name;
}

string Book::getAuthor()
{
	return this->author;
}

int Book::getPrice()
{
	return this->price;
}

string Book::toString()
{
	return string(); //сам пиши
}
