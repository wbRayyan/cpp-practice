#include <iostream>
using namespace std;  

int main() {
    cout << "We will calculate factorial of a number..." << endl;   
    int n, fact=1;
    cout << "Enter the number: ";
    cin >> n;
    while(n>0){
        fact *= n;
        n--;
    }
    cout << "The factorial of " << n << " is :" << fact;
    return 0;
}