#include <iostream>
using namespace std;

int main() {
    int arr[5], searchNum;
    bool mila = false;

    cout << "5 numbers enter karein:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Kaunsa number search karna hai? ";
    cin >> searchNum;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == searchNum) {
            cout << "Number index " << i << " par mila." << endl;
            mila = true;
        }
    }

    if (mila == false) {
        cout << "Number array mein nahi mila." << endl;
    }

    return 0;
}
