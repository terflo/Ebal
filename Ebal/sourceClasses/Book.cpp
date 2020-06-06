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
}

void Book::setAuthor(string author)
{
}

void Book::setPrice(int price)
{
}

string Book::getName()
{
	return string();
}

string Book::getAuthor()
{
	return string();
}

int Book::getPrice()
{
	return this->price;
}

string Book::toString()
{
	return string();
}
