#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) 
    return false;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

void printPrimes(int n) {
    cout << "Prime numbers from 2 to " << n << " are:" << endl;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    printPrimes(n);
    return 0;

}