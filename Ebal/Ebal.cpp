#include <iostream>
#include <clocale>
#include "fileWorker/FileManager.h"
#include "sourceClasses/BookShop.h"
#include "sourceClasses/Book.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    BookShop BookShop1("Пушкин");
    BookShop1.addBook(Book("Война и мир", "Толстой", 300));
    BookShop1.addBook(Book("Горе от ума", "Грибоедов", 200));
    BookShop1.addBook(Book("Азбука", "Кирилл", 100));
    BookShop BookShop2("Ленина");
    BookShop2.addBook(Book("ОБЖ", "Учителев", 50));
    BookShop2.addBook(Book("Русский", "Мефодиев", 250));
    BookShop2.addBook(Book("Матан", "Авдеев", 150));
    BookShop BookShop3("Зайцева");
    BookShop3.addBook(Book("Информатика", "Смирнова", 25));
    BookShop3.addBook(Book("Автомобили", "Юкубович", 33));
    BookShop3.addBook(Book("Детали для авто", "Эльдаров", 75));
    vector<BookShop> BookShops;
    vector<BookShop> BookShops2;
    BookShops.push_back(BookShop1);
    BookShops.push_back(BookShop2);
    BookShops.push_back(BookShop3);
    FileManager fm;
    fm.writeToFile(BookShops);
    vector<BookShop> final = fm.readFromFile();
    for (BookShop bs : final) {
        cout << bs.toString() << endl;
    }
    cout << endl;
    return 0;
}   