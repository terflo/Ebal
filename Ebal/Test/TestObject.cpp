#include "TestObject.h"

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