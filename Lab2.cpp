#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

int Armstrong(int n);
void intervalArmstrong(int from, int to);
int isPrime(int n);
void intervalArmstrongPrime(int from, int to);
void firstArmstrongNumbers(int n);

int main()
{
    int intervalFrom, intervalTo;
    int key;
    int number;
    int from, to;
    int firstNumbers;

    do {
        cout << "Proiect numarul 2 elaborat de Banari Vlad" << endl;
        cout << "1 - Is this an Armstrong number? " << endl;
        cout << "2 - All Armstrong numbers from interval: " << endl;
        cout << "3 - All Prime Armstrong numbers from interval: " << endl;
        cout << "4 - " << endl;
        cout << "0 - Stop" << endl;
        cin >> key;
        switch (key) {
        case 1:
            cout << "Enter a number: "; cin >> number;
            if (!Armstrong(number)) cout << "Not ";
            cout << "an Armstrong number" << endl;
            _getch();
            break;
        case 2:
            cout << "Enter an interval (from): ";
            cin >> intervalFrom;
            cout << "Enter an interval (to): ";
            cin >> intervalTo;
            cout << "All Armstrong numbers from interval: " << endl;
            if (intervalFrom > intervalTo) {
                intervalArmstrong(intervalTo, intervalFrom);
            }
            else {
                intervalArmstrong(intervalFrom, intervalTo);
            }
            _getch();
            break;
        case 3:
            cout << "Enter an interval (from): ";
            cin >> intervalFrom;
            cout << "Enter an interval (to): ";
            cin >> intervalTo;
            cout << "All Prime Armstrong numbers from interval: " << endl;
            if (intervalFrom > intervalTo) {
                intervalArmstrongPrime(intervalTo, intervalFrom);
            }
            else {
                intervalArmstrongPrime(intervalFrom, intervalTo);
            }
            _getch();
            break;
        case 4:
            cout << "Enter how many Armstrong numbers you want: ";
            cin >> firstNumbers;
            firstArmstrongNumbers(firstNumbers);
            _getch();
            break;
        case 5: 
            cout << "";
            break;
        }
    } while (key);
}

int Armstrong(int n) {
    int copy = n;
    int numbers = 0, amount = 0;
    int digit;

    for (numbers; copy > 0; numbers++) {
        copy /= 10;
    }
    
    copy = n;
    while (n != 0) {
        digit = n % 10;
        amount += pow(digit, numbers);
        n /= 10;
    }
    
    return amount == copy;
}

void intervalArmstrong(int from, int to) {
    for (from; from < to; from++) {
        if (Armstrong(from))
            cout << from << " ";
    }
}

void firstArmstrongNumbers(int n) {
    int counter = 0;
    int number = 0;
    do {
        if (Armstrong(number)) {
            cout << number << " ";
            counter++;
        }
        number++;
    } while (counter < n);
}

int isPrime(int n) {
    for (int i = 2; i < n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void intervalArmstrongPrime(int from, int to) {
    for (from; from < to; from++) {
        if (isPrime(from) && Armstrong(from))
            cout << from << " ";
    }
}
