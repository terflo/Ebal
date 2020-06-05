#include "BookShop.h"
#include <string>
//
// Created by Nik on 05.06.2020.
//

BookShop::BookShop(string name) {
	this.name = name;
}

bool BookShop::operator==(BookShop bookShop) {
    return this->name == bookShop.getName();
}