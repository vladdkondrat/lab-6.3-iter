#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Функція для створення масиву
void Create(int* arr, int size, int Low, int High) {
    for (int i = 0; i < size; i++) {
        arr[i] = Low + rand() % (High - Low + 1);
    }
}

// Функція для виведення масиву
void Print(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

// Функція для визначення, чи елементи масиву впорядковані за не зростанням
bool isSortedNonIncreasing(const int* arr, int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    const int size = 10;
    int arr[size];

    Create(arr, size, -10, 10);
    cout << "Original array: ";
    Print(arr, size);

    if (isSortedNonIncreasing(arr, size)) {
        cout << "The elements of the array are sorted in non-increasing order." << endl;
    }
    else {
        cout << "The elements of the array are not sorted in non-increasing order." << endl;
    }

    return 0;
}
