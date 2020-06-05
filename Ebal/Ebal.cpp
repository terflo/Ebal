#include <iostream>
#include <string>
#include "fileWorker/FileManager.h"
#include "Test/Object.h"

using namespace std;

int main()
{
    list<Object> bk;
    Object book1("Война и мир");
    Object book2("Горе от ума");
    Object book3("Пиздец");
    bk.push_back(book1);
    bk.push_back(book2);
    bk.push_back(book3);
    FileManager fm;
    fm.writeFromFile(bk.begin());
    return 0;
}