#include <list>
#include <fstream>
#include <iostream>
#include "../sourceClasses/BookShop.h"

using namespace std;

class FileManager {
private:
	ifstream ifile;
	ofstream ofile;

public:
	FileManager();
	~FileManager();
	list<BookShop> readFromFile();
	void writeFromFile(list<BookShop> books);
};