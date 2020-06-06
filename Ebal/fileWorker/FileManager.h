#include <fstream>
#include <iostream>
#include "../sourceClasses/BookShop.h"
#include "../containers/List.h"
#include "../Test/Object.h"

#define Object Object

using namespace std;

class FileManager {
private:
	ifstream ifile;
	ofstream ofile;

public:
	FileManager();
	~FileManager();
	List<Object> readFromFile();
	void writeFromFile(List<Object> books);
};