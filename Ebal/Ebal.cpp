#include <iostream>
#include <clocale>
#include "containers/List.h"
#include "fileWorker/FileManager.h"
#include "sourceClasses/BookShop.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    List<BookShop> bks;
    BookShop bks1("123");
    bks1.addBook(Book("Война и мир", "Толстой", 300));
    bks1.addBook(Book("Война и мир 2", "Толстой", 350));
    BookShop bks2("ЧитайГород");
    bks2.addBook(Book("Война и мир 3", "Толстой", 300));
    bks2.addBook(Book("Война и мир 4", "Толстой", 350));
    BookShop bks3("Чтиво");
    bks3.addBook(Book("Война и мир 5", "Толстой", 300));
    bks3.addBook(Book("Война и мир 6", "Толстой", 350));
    bks.push_back(bks1);
    bks.push_back(bks2);
    bks.push_back(bks3);

    cout << bks.getSize();
   // cout << bks.get(0).toString();

    /*BookShop BookShop1("Пушкин");
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
    List<BookShop> BookShops;
    List<BookShop> BookShops2;
    BookShops.push_back(BookShop1);
    BookShops.push_back(BookShop2);
    BookShops.push_back(BookShop3);
    cout << BookShop1.toString();
    cout << BookShop2.toString();
    cout << BookShop3.toString();
    FileManager fm;
    fm.writeFromFile(BookShops);
    BookShops2 = fm.readFromFile();*/
    cout << endl;
    return 0;
}   