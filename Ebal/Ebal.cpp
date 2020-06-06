#include <iostream>
#include "containers/List.h"
#include "fileWorker/FileManager.h"
#include "sourceClasses/BookShop.h"
#include "sourceClasses/Book.h"
#include "Test/TestClass.h"
#include "factories/BookShopFactory.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    BookShopFactory book;
    book.createBook();

}   