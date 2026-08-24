#include <iostream>
using namespace std;

int fibonacci(int n){
    int a=0 , b=1 , nextNum;
    for(int i=1 ; i<=n ;i++){
        nextNum = a+b;
        a=b;
        b=nextNum;
    }
    return nextNum;
}

int main(){

    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    cout << "The " << n << "th term of fibonacci series is " << fibonacci(n) << endl;
    return 0;
    
} 