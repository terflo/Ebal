#include "BookShop.h"
//
// Created by Nik on 05.06.2020.
//

BookShop::BookShop(string name) {
	this->name = name;
}

BookShop::BookShop()
{
}

BookShop::~BookShop()
{
}

string BookShop::getName()
{
	return string();
}

string BookShop::toString()
{
	return string();
}

bool BookShop::operator==(BookShop bookShop) {
    return this->name == bookShop.getName();
}

bool BookShop::operator!=(BookShop bookShop)
{
	return false;
}
