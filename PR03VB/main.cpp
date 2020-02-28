#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#define NMAX 100
using namespace std;

int Read(int n, int arr[]);
int Print(int n, int arr[], char str[]);
int Max(int n, int arr[]);
int Min(int n, int arr[]);
float Average(int n, int arr[]);
int Rotate(int n, int arr[]);
int DeleteElement(int &n, int arr[], int val);
int InsertElement(int &n, int arr[], int val);

int main() {
    int option;
    int n = 6;
    int populations[NMAX] = {14, 2, 7, 9, 5, 12};
    do {
        system("cls");
        cout << "\nThird Project created by Banari Vladislav" << endl;
        cout << "1 - Print country with min and max population: " << endl;
        cout << "2 - Print average of countries' population: " << endl;
        cout << "3 - Sort: " << endl;
        cout << "4 - Rotate by 6 (right): " << endl;
        cout << "5 - Delete: " << endl;
        cout << "0 - Stop" << endl;
        cout << "\n\n\tChoose an option (from zero to nine): ";
        cin >> option;
        switch(option) {
            case 1:
                cout << "\nThe biggest population is: " << Max(n, populations) << endl;
                cout << "The smallest population is: " << Min(n, populations) << endl;
                Print(n, populations, str);
                _getch();
            break;
            case 2:
                cout << "\nAverage population is: " << Average(n, populations);
                _getch();
            break;
            case 3:
                Print(n, populations, str);
                 Rotate(n, populations);
                Print(n, populations, "rotit");
                _getch();
            break;
            case 4:
            break;
        }
    } while (option);
    return 0;
}

int Print(int n, int arr[], char str[]) {
    cout << str << " array of population \n";
    for (int i = 0; i < n; i++)
        cout << setw(8) << arr[i] << endl;
    return 1;
}

int Min(int n, int arr[]) {
    int aux = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < aux)
            aux = arr[i];
    }
    return aux;
}

int Max(int n, int arr[]) {
    int aux = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > aux)
            aux = arr[i];
    }
    return aux;
}

float Average(int n, int arr[]) {
    float average = 0;
    int i = 0;
    for (i; i < n; i++) {
        average += arr[i];
    }
    return average / n;
}


