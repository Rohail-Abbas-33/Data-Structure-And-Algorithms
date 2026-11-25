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
    int pos, val;

    cout << "Shuru ka array: ";
    showArray(a, count);

    cout << "Kis position par insert karna hai (1 se " << count + 1 << " tak)? ";
    cin >> pos;

    if (pos < 1 || pos > count + 1 || count >= 100) {
        cout << "Galat position hai ya array full hai." << endl;
        return 0;
    }

    cout << "Nayi value likhein: ";
    cin >> val;
    for (int i = count; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = val;
    count++;

    cout << "Insertion ke baad array: ";
    showArray(a, count);

    return 0;
}
