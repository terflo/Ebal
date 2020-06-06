#include <fstream>
#include <iostream>
#include "../sourceClasses/BookShop.h"
#include "../sourceClasses/Book.h"
#include "../containers/List.h"


#define Object TestObject

using namespace std;

class FileManager {
private:
	ifstream ifile;
	ofstream ofile;

public:
	FileManager();
	~FileManager();
	List<BookShop> readFromFile();
	void writeFromFile(List<BookShop> books);
};

inline FileManager::FileManager()
{
}

inline FileManager::~FileManager()
{
}

inline List<BookShop> FileManager::readFromFile()
{
	return List<BookShop>();
}

inline void FileManager::writeFromFile(List<BookShop> books)
{

}