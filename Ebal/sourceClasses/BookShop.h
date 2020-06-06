//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_BOOKSHOP_H
#define UNTITLED_BOOKSHOP_H
//
// Created by Nik on 05.06.2020.
//

#include <string>
#include "Book.h"
#include "../containers/List.h"

class BookShop {
private:
    List<Book> bookList;
    string name;
public:
    BookShop(string name);
    BookShop();
    ~BookShop();
    string getName();
    string toString();
    bool operator ==(BookShop bookShop);
    bool operator != (BookShop bookShop);


};


#endif //UNTITLED_BOOKSHOP_H
