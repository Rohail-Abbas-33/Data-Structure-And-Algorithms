#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "5 numbers enter karein:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array ke elements yeh hain:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
