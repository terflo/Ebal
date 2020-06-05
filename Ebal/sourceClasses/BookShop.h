//
// Created by Nik on 05.06.2020.
//

#ifndef TEST_BOOKSHOP_H
#define TEST_BOOKSHOP_H

#include <string>
#include "./Book.h"
using namespace std;
class BookShop {
private:
	list<Book> bookList;
	string name;
public:
	BookShop(string name);
	~BookShop();
	string getName();
	string toString();
	bool operator ==(BookShop bookShop);
	bool operator != (BookShop bookShop);


};


#endif //TEST_BOOKSHOP_H
