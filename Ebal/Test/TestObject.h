#pragma once

#include <string>
#include "../containers/List.h"
#include "../sourceClasses/Book.h"

using namespace std;

class TestObject {
private:
	string name;
	List<Book> list;

public:
	TestObject();
	TestObject(string name);
	~TestObject();
	string getName();
	void addBook(Book book);
};

inline TestObject::TestObject(string name) {
	this->name = name;
}

inline TestObject::TestObject() {
	this->name = "";
}

inline TestObject::~TestObject() {

}

inline string TestObject::getName() {
	return this->name;
}

inline void TestObject::addBook(Book book) {
	list.push_back(book);
}
