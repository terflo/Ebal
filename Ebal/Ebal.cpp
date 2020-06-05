#include <iostream>
#include <string>
#include "sourceClasses/BookShop.h"
#include "fileWorker/FileManager.h"

using namespace std;

int main()
{
    list<BookShop> bk;
    bk.push_back(new BookShop("Война и мир"));
    bk.push_back(new BookShop("Горе от ума"));
    bk.push_back(new BookShop("Пиздец"));
    FileManager fm;
    fm.writeFromFile(bk);
    return 0;
}