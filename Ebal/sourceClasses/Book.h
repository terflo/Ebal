//
// Created by Nik on 06.06.2020.
//
#include <string>
#ifndef UNTITLED_BOOK_H
#define UNTITLED_BOOK_H
using namespace std;

class Book {
private:
    string name;
    string author;
    int price;

public:
    Book(string name);
    ~Book();
    void setName(string name);
    void setAuthor(string author);
    void setPrice(int price);
    string getName();
    string getAuthor();
    int getPrice();
    string toString();
};


#endif //UNTITLED_BOOK_H
