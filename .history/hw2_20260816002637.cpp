#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n, fact=0;
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        fact = fact*i;
    }
    cout << fact;
    return 0;
}