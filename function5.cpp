#include <iostream>
using namespace std;

int fact(int a){
    int f = 1;
    for(int i=1 ; i<=a ;i++){
        f = f*i;
    }
    return f;
}

int main(){

    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    int nf = fact(n);
    cout << "Factorial of n = " << fact(n) << endl;
    int r;
    cout << "Enter the value of r = ";
    cin >> r;
    int rf = fact(r);
    cout << "Factorial of r = " << fact(r) << endl;

    int b = n-r;
    cout << "Factorial of n-r = " << fact(b) << endl;
    int nrf = fact(b);

    int bd = rf*nrf;

    cout << "nCr = " << nf/bd;
    return 0;
    
} 