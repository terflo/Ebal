//
// Created by Nik on 05.06.2020.
//

#include <string>
#include "./Book.h"
#include "../containers/List.h"

using namespace std;
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
