//
// Created by Nik on 05.06.2020.
//
#include "iostream"
#include "BookshopListShell.h"
using namespace std;

void BookshopListShell::addNewBookshop(BookShop bookShop) {
    bookList.push_front(bookShop);
}

void BookshopListShell::info() {
    string bufferInfo;
    for(BookShop bookShop : bookList){
        bufferInfo += bookShop.toString();
    }
    cout << bufferInfo << endl;
}
void BookshopListShell::updateBookshop(string bookshopName) {
    for (BookShop bookShop : bookList){
        if (bookShop.getName() == bookshopName){

        }
    }
}
BookShop BookshopListShell::getBookshop(string name) {
    for(BookShop bookShop : bookList){
        if(bookShop.getName() == name){
            return bookShop;
        }
    }
}
