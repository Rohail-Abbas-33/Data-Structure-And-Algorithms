#include <iostream>
using namespace std;

void showArray(int a[], int count) {
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[100] = {10, 20, 30, 40, 50};
    int count = 5;
    int pos;

    cout << "Shuru ka array: ";
    showArray(a, count);

    cout << "Kis position ka element delete karna hai (1 se " << count << " tak)? ";
    cin >> pos;

    if (pos < 1 || pos > count) {
        cout << "Galat position hai." << endl;
        return 0;
    }

    // Delete ki gayi jagah bharne ke liye baqi elements left shift kar rahe hain
    for (int i = pos - 1; i < count - 1; i++) {
        a[i] = a[i + 1];
    }

    count--;

    cout << "Deletion ke baad array: ";
    showArray(a, count);

    return 0;
}
