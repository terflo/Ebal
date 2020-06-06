//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_BOOKSHOPFACTORY_H
#define UNTITLED_BOOKSHOPFACTORY_H

#include <iostream>
#include <string>
#include "../containers/List.h"
#include "../sourceClasses/Book.h"
#include "BookFactory.h"


using namespace std;


class BookShopFactory {
private:
    string createName(){
        string bookName;
        cout << "Enter book name: ";
        cin >> bookName;
        return bookName;
    }

public:
    List<Book> createBook(){
        int bookCount;
        List<Book> bookList;
        BookFactory bookFactory;
        cout << "Enter book count: ";
        cin >> bookCount;
        for(int i = 0; i<= bookCount; i++){
            bookList.push_back(bookFactory.createBook());
        }
        return bookList;
    }

};


#endif //UNTITLED_BOOKSHOPFACTORY_H
