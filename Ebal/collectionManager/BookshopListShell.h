#pragma once
//
// Created by Nik on 05.06.2020.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "../sourceClasses/BookShop.h"

using namespace std;

bool comp(BookShop a, BookShop b) {
    return a.bookCount() > b.bookCount();
}

class BookshopListShell {
private:
    vector<BookShop> bookList;
public:
    BookshopListShell();
    ~BookshopListShell();
    void sortVec();
    void addNewBookshop(BookShop bookShop);
    void removeBookshopByName(string name);
    void updateBookshop(string bookshopName);
    void showBookshopList();
    BookShop getBookshop(string name);
    void info();
};

BookshopListShell::BookshopListShell() {

}

BookshopListShell::~BookshopListShell() {

}

inline void BookshopListShell::sortVec() {
    sort(bookList.begin(), bookList.end(), comp);
}

void BookshopListShell::addNewBookshop(BookShop bookShop) {
    bookList.push_back(bookShop);
}

void BookshopListShell::removeBookshopByName(string name)
{
}

void BookshopListShell::info() {
    string bufferInfo;
    for (BookShop bookShop : bookList) {
        bufferInfo += bookShop.toString();
    }
    cout << bufferInfo << endl;
}

void BookshopListShell::updateBookshop(string bookshopName) {
    for (BookShop bookShop : bookList) {
        if (bookShop.getName() == bookshopName) {

        }
    }
}

void BookshopListShell::showBookshopList()
{
}

BookShop BookshopListShell::getBookshop(string name) {
    for (BookShop bookShop : bookList) {
        if (bookShop.getName() == name) {
            return bookShop;
        }
    }
}