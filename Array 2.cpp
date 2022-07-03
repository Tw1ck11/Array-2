// Array 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Task 1
    const int size1 = 10;
    int numbers1[size1] = {};

    srand(time(0));
    rand();

    for (int i = 0; i < size1; i++) {
        numbers1[i] = rand();
        cout << numbers1[i] << " ";
    }
    cout << endl;
    reverse(numbers1, numbers1 + size1);

    for (int i = 0; i < size1; i++) {
        cout << numbers1[i] << " ";
    }
    cout << "\n\n";

    //Task 2
    const int size2_1 = 5, size2 = 10;
    int numbers2_1[size2_1] = {}, numbers2_2[size2_1] = {}, numbers2[size2] = {};

    cout << "First array: ";
    for (int i = 0; i < size2_1; i++) {
        numbers2_1[i] = rand();
        cout << numbers2_1[i] << " ";
    }
    cout << endl;
    cout << "Second array: ";
    for (int i = 0; i < size2_1; i++) {
        numbers2_2[i] = rand();
        cout << numbers2_2[i] << " ";
    }
    for (int i = 0, j = 0; i < size2; i += 2, j++) {
        numbers2[i] = numbers2_1[j];
    }
    for (int i = 1, j = 0; i < size2; i += 2, j++) {
        numbers2[i] = numbers2_2[j];
    }
    cout << endl;
    cout << "Third array: ";
    for (int i = 0; i < size2; i++) {
        cout << numbers2[i] << " ";
    }
    cout << "\n\n";

    //Task 3
    const int size3 = 20;
    int numbers3[size3] = {}, numbers3_res[size3] = {}, n = 0;

    for (int i = 0; i < size3; i++) {
        numbers3[i] = rand() % 201 - 100;
        cout << numbers3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size3; i++) {
        if (numbers3[i] > 0) {
            numbers3_res[n] = numbers3[i];
            n++;
        }
    }
    for (int i = 0; i < size3; i++) {
        if (numbers3[i] == 0) {
            numbers3_res[n] = numbers3[i];
            n++;
        }
    }
    for (int i = 0; i < size3; i++) {
        if (numbers3[i] < 0) {
            numbers3_res[n] = numbers3[i];
            n++;
        }
    }
    for (int i = 0; i < size3; i++) {
        cout << numbers3_res[i] << " ";
    }
    cout << endl;
}