#include <iostream>
using namespace std;


int binToDec(int n){
    int ans = 0 , pow = 1;
    while(n > 0){
        int rem = n%10;
        n /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main() {
    cout << "<<< BINARY TO DECIMAL CONVERSION >>>" << endl;
    cout << "Enter the number you want to convert = "; 
    int n;
    cin >> n;

    for(int i=1 ; i<= n ; i++){
        cout << binToDec(n) << endl;
    }

    return 0;
} 