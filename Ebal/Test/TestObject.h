#pragma once

#include <string>

using namespace std;

class TestObject {
private:
	string name;

public:
	TestObject();
	TestObject(string name);
	~TestObject();
	string getName();
};

TestObject::TestObject(string name) {
	this->name = name;
}

TestObject::TestObject() {
	this->name = "";
}

TestObject::~TestObject() {

}

string TestObject::getName() {
	return this->name;
}