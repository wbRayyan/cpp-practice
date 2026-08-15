#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n, fact;
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        fact *= i;
    }
    cout << fact;
    return 0;
}