#include <list>
#include <fstream>
#include <iostream>
#include "../sourceClasses/BookShop.h"

#define Object Object

using namespace std;

class FileManager {
private:
	ifstream ifile;
	ofstream ofile;

public:
	FileManager();
	~FileManager();
	list<Object> readFromFile();
	void writeFromFile(list<Object> books);
};