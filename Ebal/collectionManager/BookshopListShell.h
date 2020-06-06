#pragma once
//
// Created by Nik on 05.06.2020.
//
#include <list>
#include <iostream>
#include "../sourceClasses/BookShop.h"

using namespace std;

class BookshopListShell {
private:
    list<BookShop> bookList;
public:
    BookshopListShell();
    ~BookshopListShell();
    void addNewBookshop(BookShop bookShop);
    void removeBookshopByName(string name);
    void updateBookshop(string bookshopName);
    void showBookshopList();
    BookShop getBookshop(string name);
    void info();


};



