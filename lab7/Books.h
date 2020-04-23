#pragma once
#include "Library.h"
#include "Header.h"

class Library {
protected: 
	vector<Book> arr;
public:
	Book buildLibrary();
	void readFile(string road);
	void writeElement();
	void addElement();
	void changeElement();
	void deleteElement(int id);
	void sortByName();
	void sortByNameAndVolume();
};
