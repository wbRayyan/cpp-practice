#include <iostream>
using namespace std;

int SumOfDigits(int n){
    int sum=0, rem;
    while( n>0 ){
        int LastDigit = n%10;
        n /= 10;
        sum += LastDigit;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    cout << SumOfDigits(n);
    return 0;
} 