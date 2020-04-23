#include "Header.h"
#include "Books.h"

int main()
{
    Library library;
    int key;
    int id;
    string file = "C:\\Users\\vladi\\Desktop\\University\\CPP\\PR07VB\\db.txt";
    library.readFile(file);
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
            library.writeElement();
            _getch();
        break;
        case 2:
            library.sortByNameAndVolume();
            _getch();
        break;
        case 3:
            library.sortByNameAndVolume();
            _getch();
        case 4:
            library.addElement();
            _getch();
        case 5:
            cout << "Enter id: ";
            cin >> id; 
            library.deleteElement(id);
            _getch();
        case 6:
            library.changeElement();
            _getch();
        break;
        }
    } while (key);
    return 0;
}
