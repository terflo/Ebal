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