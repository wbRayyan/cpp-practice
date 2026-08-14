#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number\n";
    int count = 1;
    int n;
    cin >> n;

    while ( count <= n ){
        cout << count << endl;
        count++;
    }

    return 0;
}