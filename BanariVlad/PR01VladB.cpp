#include <iostream>

using namespace std;

int minim = 999, maxim = 0, gap;
float average;
int smaller = 0, same = 0, bigger = 0;
int giant = 0, middle = 0, small = 0;
int population, countries, compareNumber;

int main()
{
    cout << "Enter number of countries: ";
    cin >> countries;

    cout << "Enter number to compare countries' population: ";
    cin >> compareNumber;

    for (int i = 0; i < countries; i++) {
        cout << "Enter population of the " << i + 1 << " country: ";
        cin >> population;

        if (population < 0 || population > 999) {
            population = minim;
            i = --i;
        };

        average += population;

        if (population < minim) minim = population;
        if (population > maxim) maxim = population;

        if (population > compareNumber) bigger++;
        else if (population < compareNumber) smaller++;
        else same++;

        if (population > 20) giant++;
        else if (population > 10 && population < 20) middle++;
        else small++;
    }

    average /= countries;
    gap = maxim - minim;
    cout << "Country with max population has " << maxim << " million citizens \n";
    cout << "Country with min population has " << minim << " million citizens \n";
    cout << "Gap between max and min population is: " << gap << "\n";
    cout << "Average population is: " << average << "\n";
    cout << "Countries with bigger population than introduced number: " << bigger << "\n";
    cout << "Countries with same population than introduced number: " << same << "\n";
    cout << "Countries with smaller population than introduced number: " << smaller << "\n";
    cout << "Giant countries: " << giant << "\n";
    cout << "Middle countries: " << middle << "\n";
    cout << "Small countries: " << small << "\n";
}
