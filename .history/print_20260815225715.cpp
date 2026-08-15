#include <iostream>
using namespace std;

int main() {
    int start = 1;
    cout << "Enter the number = ";
    int n;
    cin >> n;

    while ( start <= n ){
        start = start++;
    }
    cout << start;

    return 0;
}