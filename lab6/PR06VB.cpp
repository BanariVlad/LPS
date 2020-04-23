#include "Header1.h"

int main()
{
    int key;
    int position;
    vector<Library> arrLibrary;
    arrLibrary.reserve(81);
    string file = "C:\\Users\\vladi\\Desktop\\University\\CPP\\PR06VB\\db.txt";
    readFile(arrLibrary, file);

    do {
        cout << "1. Write data: " << endl;
        cout << "2. Sort (name): " << endl;
        cout << "3. Sort (name, volume): " << endl;
        cout << "4. Sort (name, volume): " << endl;
        cout << "4. Add element: " << endl;
        cout << "5. Delete (position): " << endl;
        cout << "6. Change library:" << endl;
        cout << "7. Filter library:" << endl;
        cout << "0. Exit:" << endl;
        cout << "\tChoose (0 - 9)-> " << endl;
        cin >> key;
        switch (key)
        {
        case 1:
            printElements(arrLibrary);
            _getch();
        break;
        case 2:
            sortByName(arrLibrary);
            _getch();
        break;
        case 3:
            sortByNameAndVolume(arrLibrary);
            _getch();
        break;
        case 4:
            addElement(arrLibrary);
            _getch();
        break;
        case 5:
            cout << "Enter position: ";
            cin >> position;
            deleteElement(arrLibrary, position);
            _getch();
        break;
        case 6:
            cout << "Enter position: ";
            cin >> position;
            changeElement(arrLibrary, position);
            _getch();
        break;
        case 7:
            cout << "Enter position: ";
            cin >> position;
            changeElement(arrLibrary, position);
            _getch();
        break;
        }
    } while (key);
    return 0;
}
