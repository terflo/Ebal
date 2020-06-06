//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_BOOKFACTORY_H
#define UNTITLED_BOOKFACTORY_H

#include <string>
#include <list>
#include "../sourceClasses/Book.h"
#include <iostream>

using namespace std;

class BookFactory {
private:
    string createName(){
        string bookName;
        cout << "Enter book name: ";
        cin >> bookName;
        return bookName;
    }
    string createAuthor(){
        string bookAuthor;
        cout << "Enter book author: ";
        cin >> bookAuthor;
        return bookAuthor;
    }
    int createPrice(){
        int bookPrice;
        cout << "Enter book price: ";
        cin >> bookPrice;
        return bookPrice;

    }

public:
    Book createBook(){
        Book book(createName(),createAuthor(),createPrice());
        return book;
    }

    Book createBookWithArgs(list<string> optionsList);
};


#endif //UNTITLED_BOOKFACTORY_H
