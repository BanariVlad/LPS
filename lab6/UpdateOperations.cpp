#include "Header1.h";

Library buildLibrary() {
	Library library;
	cout << "Enter new ID: " << endl;
	cin >> library.id;
	cout << "Enter new Author: " << endl;
	cin >> library.author;
	cout << "Enter new Name: " << endl;
	cin >> library.name;
	cout << "Enter new City: " << endl;
	cin >> library.city;
	cout << "Enter new Publish: " << endl;
	cin >> library.publish;
	cout << "Enter new Volume: " << endl;
	cin >> library.volume;

	return library;
}

void printElements(vector<Library> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << " Id: " << arr[i].id
			<< " Author: " << arr[i].author
			<< " Name: " << arr[i].name
			<< " City: " << arr[i].city
			<< " Publish: " << arr[i].publish
			<< " Year: " << arr[i].year
			<< " Volume: " << arr[i].volume << endl;
	}
}

void addElement(vector<Library>& arr) {
	arr.push_back(buildLibrary());
}

void deleteElement(vector<Library> &arr, int position) {
	if (position < arr.size() && position >= 0) {
		arr.erase(arr.begin() + position - 1);
	} else {
		cout << "Loading..." << endl;
	}
	printElements(arr);
}

