#include "Header1.h"

void sortByName(vector<Library>& arr) {
    int key;
    Library aux;
    for (int i = 0; i < arr.size() - 1; i++) {
        aux = arr[i];
        key = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j].name < arr[key].name) {
                key = j;
            }
        }
        if (key != 1) {
            arr[i] = arr[key];
            arr[key] = aux;
        }
    }
    printElements(arr);
}

void sortByNameAndVolume(vector<Library> &arr) {
    int key;
    Library aux;
    for (int i = 0; i < arr.size() - 1; i++) {
        aux = arr[i];
        key = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j].name < arr[key].name) {
                key = j;
            }
            if (arr[j].name == arr[key].name) {
                if (arr[j].volume < arr[key].volume) {
                    key = j;
                }
            }
        }
        if (key != 1) {
            arr[i] = arr[key];
            arr[key] = aux;
        }
    }
    printElements(arr);
}
