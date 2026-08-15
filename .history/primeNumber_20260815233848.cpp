#include <iostream>
using namespace std;

int main() {
    int i=2 , n;
    cout << "Enter the number ";
    cin >> n;

    for(i ; i <= n-1 ; i++){
        if(n%i==0){
            break;
            cout << "The number " << n << " is not a prime number" << endl;
        } else {
            cout << "The number " << n << " is a prime number" << endl;
        }
    }
    return 0;
}