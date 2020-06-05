//
// Created by Nik on 06.06.2020.
//

#ifndef UNTITLED_BOOKFACTORY_H
#define UNTITLED_BOOKFACTORY_H

#include <string>
#include <list>
#include "../sourceClasses/Book.h"
using namespace std;

class BookFactory {
private:
    string createName();
    string createAuthor();
    int createPrice();

public:
    Book createBook();
    Book createBookWithArgs(list<string> optionsList)
};


#endif //UNTITLED_BOOKFACTORY_H
