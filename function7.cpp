#include <iostream>
using namespace std;

bool PrimeOrNot(int n){
    bool check=true;

    for(int i=2 ; i <= n-1 ; i++){
        if(n%i==0){
            check=false;
            break;
        }
    }

    if(check == true){
        cout << "The number " << n << " is a prime number" << endl;
    } else {
        cout << "The number " << n << " is not a prime number" << endl;
    }
}

int main(){
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    cout << PrimeOrNot(n) << endl;
    return 0;

} 