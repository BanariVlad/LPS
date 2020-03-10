#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#define NMAX 100
using namespace std;

void PrintArray(int n, int arr[], char str[]);
int Max(int n, int arr[]);
int Min(int n, int arr[]);
float Average(int n, int arr[]);
int RightRotateByOne(int n, int arr[]);
void RightRotate(int n, int arr[], int k);
void DeleteElement(int &n, int arr[], int element);
void InsertionSort(int n, int arr[]);
void InsertElement(int &n, int arr[], int element);
void PopulationRange(int n, int arr[]);

int main() {
    int option;
    int n = 6;
    int rotationNumber;
    int newElement;
    int positionToDelete;
    int populations[NMAX] = {14, 8, 7, 9, 5, 12};
    do {
        system("CLS");
        cout << "\nThird Project created by Banari Vladislav" << endl;
        cout << "1 - Print country with min and max population: " << endl;
        cout << "2 - Print average of countries' population: " << endl;
        cout << "3 - Rotate array(right): " << endl;
        cout << "4 - Sort array: " << endl;
        cout << "5 - Add an element: " << endl;
        cout << "6 - Delete an element: " << endl;
        cout << "0 - Stop" << endl;
        cout << "\n\n\tChoose an option (from zero to nine): ";
        cin >> option;
        switch(option) {
            case 1:
                PrintArray(n, populations, "Initial");
                cout << "\nThe biggest population is: " << Max(n, populations) << endl;
                cout << "The smallest population is: " << Min(n, populations) << endl;
                _getch();
            break;
            case 2:
                cout << "\nAverage population is: " << Average(n, populations);
                _getch();
            break;
            case 3:
                cout << "How many times you want to rotate the array? ";
                cin >> rotationNumber;
                PrintArray(n, populations, "Initial");
                RightRotate(n, populations, rotationNumber);
                PrintArray(n, populations, "Changed");
                _getch();
            break;
            case 4:
                PrintArray(n, populations, "Initial");
                InsertionSort(n, populations);
                PrintArray(n, populations, "Sorted");
                _getch();
            break;
            case 5:
                cout << "Introduce new element: ";
                cin >> newElement;
                PrintArray(n, populations, "Initial");
                InsertElement(n, populations, newElement);
                InsertionSort(n, populations);
                PrintArray(n, populations, "Sorted and added");
                _getch();
            break;
            case 6:
                cout << "Introduce position of element you want to delete: ";
                cin >> positionToDelete;
                PrintArray(n, populations, "Initial");
                DeleteElement(n, populations, positionToDelete);
                PrintArray(n, populations, "Sorted and added");
                _getch();
            break;
            case 7:
                cout << "Introduce "
            break;
        }
    } while (option);
    return 0;
}

void PrintArray(int n, int arr[], char str[]) {
    cout << "\n" << str << " array of population \n";
    for (int i = 0; i < n; i++)
        cout << setw(7) << arr[i] << " ";
}

int Min(int n, int arr[]) {
    int aux = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < aux)
            aux = arr[i];
    return aux;
}

int Max(int n, int arr[]) {
    int aux = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > aux)
            aux = arr[i];
    return aux;
}

float Average(int n, int arr[]) {
    float average = 0;
    int i = 0;
    for (i; i < n; i++)
        average += arr[i];
    return average / n;
}

void RightRotate(int n, int arr[], int k) {
    for (int i = 0; i < k; i++)
        RightRotateByOne(n, arr);
}

int RightRotateByOne(int n, int arr[]) {
    if (n == 0)
        return 0;

    int aux = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = aux;
}

void InsertionSort(int n, int arr[]) {
    int aux, j;
    for (int k = 0; k < n; k++) {
        for (int i = 1; i < n; i++) {
            j = i;
            while (arr[i] > arr[i - 1] && j > 0) {
                aux = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = aux;
                j--;
            }
        }
    }
}

void InsertElement(int &n, int arr[], int element) {
    n++;
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = element;
}

void DeleteElement(int &n, int arr[], int element) {
    n--;
    for (int i = element - 1; i < n; i++)
        arr[i] = arr[i + 1];
}

