#include "Header1.h";

void readFile(vector<Library> &arr, string road) {
	ifstream flux(road);
	string buffer;

	while (getline(flux, buffer)) {
		arr.push_back(parseLine(buffer));
	}
}
