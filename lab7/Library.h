#pragma once
#include "Header.h";

class Book{
private:
	int id;
	int year;
	int volume;
	string author;
	string name;
	string city;
	string publish;

public: 
	Book();	
	Book(string &line);
	void writeElement();
	int getId();
	int getYear();
	int getVolume();
	string getAuthor();
	string getName();
	string getCity();
	string getPublish();
};
