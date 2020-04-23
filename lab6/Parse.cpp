#include "Header1.h";

Library parseLine(string line) {
	Library buffer;
	string text;

	istringstream flux(line);
	for (int i = 0; i < 7; i++) {
		flux >> text;
		switch (i) {
			case 0:
				buffer.id = stoi(text);
				break;
			case 1:
				buffer.author = text;
				break;
			case 2:
				buffer.name = text;
				break;
			case 3:
				buffer.city = text;
				break;
			case 4:
				buffer.publish = text;
				break;
			case 5:
				buffer.volume = stoi(text);
				break;
			case 6:
				buffer.year = stoi(text);
				break;
		}
	}
	return buffer;
}
