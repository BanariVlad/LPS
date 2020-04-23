#include "Books.h"

Book Library::buildLibrary() {
	string line;
	cin.ignore(9999, '\n');
	cout << "Enter data: " << endl;
	getline(cin, line);
	cout << line;
	Book book(line);
	return book;
}

void Library::readFile(string road) {
	ifstream flux(road);
	string line;

	while (getline(flux, line)) {
		Book buffer(line);
		arr.push_back(buffer);
	}
	flux.close();
}

void Library::writeElement() {
	for (int i = 0; i < arr.size(); i++) {
		arr[i].writeElement();
	}
}

void Library::addElement() {
	arr.push_back(buildLibrary());
	writeElement();
}

void Library::changeElement() {
	Book library = buildLibrary();

	if (library.getId() >= 0 && library.getId() < arr.size()) {
		arr[library.getId()] = library;
	}

	writeElement();
}

void Library::deleteElement(int id) {
	if (id < arr.size() && id > 0) {
		arr.erase(arr.begin() + id);
		writeElement();
	}
}

void Library::sortByName() {
	for (int i = 0; i < arr.size(); i++) {
		bool flag = true;
		for (int j = 0; j < 10 - (i + 1); j++) {
			if (arr[j].getName() > arr[j + 1].getName()) {
				flag = false;
				swap(arr[j], arr[j + 1]);
			}
		}
		if (flag) {
			break;
		}
	}
	writeElement();
}


void Library::sortByNameAndVolume() {
	int key;
	Book aux;
	for (int i = 0; i < arr.size() - 1; i++) {
		aux = arr[i];
		key = i;
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j].getName() < arr[key].getName()) {
				key = j;
			}
			if (arr[j].getName() == arr[key].getName()) {
				if (arr[j].getVolume() < arr[key].getVolume()) {
					key = j;
				}
			}
		}
		if (key != 1) {
			arr[i] = arr[key];
			arr[key] = aux;
		}
	}
	writeElement();
}
