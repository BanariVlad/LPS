#include "Library.h"

Book::Book() {
	id = 0;
	year = 0;
	volume = 0;
	author = "";
	name = "";
	publish = "";
	city = "";
}

Book::Book(string &line) {
	string text;

	istringstream flux(line);
	for (int i = 0; i < 7; i++) {
		flux >> text;
		switch (i) {
		case 0:
			id = stoi(text);
			break;
		case 1:
			author = text;
			break;
		case 2:
			name = text;
			break;
		case 3:
			city = text;
			break;
		case 4:
			publish = text;
			break;
		case 5:
			volume = stoi(text);
			break;
		case 6:
			year = stoi(text);
			break;
		}
	}
}

void Book::writeElement() {
	cout << "Id: " << id;
	cout << " Author: " << author;
	cout << " Name: " << name;
	cout << " City: " << city;
	cout << " Publish: " << publish;
	cout << " Year: " << year;
	cout << " Volume: " << volume << endl;
}

int Book::getId() {
	return id;
}

int Book::getYear() {
	return year;
}

int Book::getVolume() {
	return volume;
}

string Book::getAuthor() {
	return author;
}

string Book::getName() {
	return name;
}

string Book::getCity() {
	return city;
}

string Book::getPublish() {
	return publish;
}
