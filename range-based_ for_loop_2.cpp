#include <iostream>
using namespace std;

int main() {
    int numArr[] = { 1, 2, 4, 5, 6, 7, 8 };

    // Printing the array using traditional for loop.
    cout << "Elements of the array using traditional for loop : ";
    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++) {
        cout << numArr[i] << " ";
    }
    cout << endl;

    // Printing the array using a range-based for loop.
    cout << "Elements of the array using range-based for loop : ";
    for (int num : numArr) {
        cout << num << " ";
    }

    return 0;
}
