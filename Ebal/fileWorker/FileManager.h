#include <fstream>
#include <iostream>
#include "../sourceClasses/BookShop.h"
#include "../sourceClasses/Book.h"
#include "../containers/List.h"
#include "../Test/TestObject.h"

#define Object TestObject

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

inline FileManager::FileManager()
{
}

inline FileManager::~FileManager()
{
}

List<Object> FileManager::readFromFile()
{
	return List<Object>();
}

void FileManager::writeFromFile(List<Object> books)
{

}