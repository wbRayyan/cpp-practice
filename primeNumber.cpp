#include <iostream>
using namespace std;

int main() {
    int i=2 , n;
    cout << "Enter the number ";
    cin >> n;
    bool check=true;

    for(i ; i <= n-1 ; i++){
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
    return 0;
}