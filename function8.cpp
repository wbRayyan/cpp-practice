// #include <iostream>
// using namespace std;

// void PrimeOrNot(int n){
//     for(int i=2 ; i <= n-1 ; i++){
//         if(n%i==0){
//             cout << "The number " << i << " is not a Prime Number." << endl;
//         } else {
//             cout << "The number " << i << " is a Prime Number." << endl;
//         }
//     }
// }


// int main(){
//     int n;
//     cout << "Enter the value of n = ";
//     cin >> n;

//     PrimeOrNot(n);
//     return 0;
// } 
#include <iostream>
using namespace std;

// 1. Check karne ke liye ke number prime hai ya nahi
bool isPrime(int num) {
    if (num <= 1) return false;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Factor mil gaya, prime nahi hai
        }
    }
    return true; // Kisi se divide nahi hua, prime hai
}

// 2. 2 se lekar N tak print karne ka function
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