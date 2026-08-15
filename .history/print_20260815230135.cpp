#include <iostream>
using namespace std;

int main() {
    int start = 1;
    cout << "Enter the number = ";
    int n , sum;
    cin >> n;

    while ( start <= n ){
        sum += start;
        start++;
    }
    cout << sum;

    return 0;
}