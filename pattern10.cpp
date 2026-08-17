#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // 1. Spaces print karne ka loop
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // 2. Numbers print karne ka loop
        for (int j = 0; j < n - i; j++) {
            cout << (i + 1);
        }

        // 3. New line
        cout << endl;
    }

    return 0;
}