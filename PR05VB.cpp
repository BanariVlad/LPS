#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#define NMAX 100
using namespace std;

string readFile(string file);
void writeFile(string text, string file);
int wordCounter(string phrase);
string startWithLetter(string phrase, char letter);
string deleteWords(string phrase, char letter);
int fileWordCounter(string file);
void fileDeleteWords(string file, char letter);

int main()
{
    int key, words;
    char letter;
    string file = "C:\\hi.txt";
    string road = "C:\\Users\\vladi\\Desktop\\University\\CPP\\PR05VB\\PR05VB\\slavik.txt";

    string fraza = "Vremea trece, vremea vine, doar amintirea ramine.";
    do
    {
        cout << "Tema: Siruri de caractere. Fisiere text \n";
        cout << "\n 1. Nr. de cuvinte dintr-o fraza";
        cout << "\n\t Alege (de la 0 la 9) -> ";
        cin >> key;
        switch (key)
        {
        case 1:
            cout << wordCounter(fraza);
            _getch();
        break;
        case 2:
            cout << "Enter one letter plsss: ";
            cin >> letter;
            cout << startWithLetter(fraza, letter);
            _getch();
        break;
        case 3:
            cout << "Enter one letter plsss: ";
            cin >> letter;
            cout << deleteWords(fraza, letter);
            _getch();
        break;
        case 4:
            cout << readFile(file);
            _getch();
        break;
        case 5:
            cout << fileWordCounter(file);
            _getch();
        break;
        case 6:
            cout << "Enter one letter plsss: ";
            cin >> letter;
            writeFile(startWithLetter(fraza, letter), road);
            _getch();
        break;
        case 7:
            cout << "Enter one letter plsss: ";
            cin >> letter;
            fileDeleteWords(file, letter);
            _getch();
        break;
        }
    } while (key);
    return 0;
}

int wordCounter(string phrase) {
    int number = 0;
    string buffer;
    istringstream flux(phrase);

    flux >> buffer;
    while (flux && !buffer.empty()) {
        buffer = "";
        number++;
        flux >> buffer;
    }

    return number;
}

string startWithLetter(string phrase, char letter) {
    string buffer;
    istringstream flux(phrase);
    string text;

    flux >> buffer;
    while (flux) {
        if (buffer[0] == letter) {
            text += buffer + " ";
        }
        buffer = "";
        flux >> buffer;
    }

    return text;
}

string deleteWords(string phrase, char letter) {
    string buffer;
    istringstream flux(phrase);
    string text;

    flux >> buffer;
    while (flux) {
        if (buffer[0] != letter) {
            text += buffer + " ";
        }
        buffer = "";
        flux >> buffer;
    }

    return text;
}

string readFile(string file) {
    string buffer;
    ifstream fileFlux(file);
    string text;

    while (getline(fileFlux, buffer)) {
        text += buffer + "\n";
    }

    return text;
}

int fileWordCounter(string file) {
    int number = 0;
    string buffer;
    ifstream flux(file);

    flux >> buffer;
    while (flux && !buffer.empty()) {
        buffer = "";
        number++;
        flux >> buffer;
    }

    return number;
}

void writeFile(string text, string file) {
    ofstream writeText(file);
    writeText << text << "\n";
    writeText.close();
}

void fileDeleteWords(string file, char letter) {
    string buffer;
    ifstream flux(file);
    string text;

    flux >> buffer;
    while (flux) {
        if (buffer[0] != letter) {
            text += buffer + " ";
        }
        buffer = "";
        flux >> buffer;
    }

    writeFile(text, file);
}

