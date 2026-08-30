#include <iostream>
using namespace std;


int decToBin(int n){
    int ans = 0 , pow = 1;
    while(n > 0){
        int rem = n%2;
        n /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {
    cout << "<<< DECIMAL TO BINARY CONVERSION >>>" << endl;
    cout << "Enter the number you want to convert = "; 
    int n;
    cin >> n;

    for(int i=1 ; i<= n ; i++){
        cout << decToBin(i) << endl;
    }

    return 0;
} 