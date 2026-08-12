#include <iostream>
using namespace std;

int main() {
    cout << "We will calculate max of two numbers..." << endl;   
    int a,b,max;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if(a>b)
        max=a;
    else if(b==a)
        cout << "Both numbers are equal." << endl;
    else
        max=b; // 
    cout << "The maximum number is: " << max << endl;
    return 0;
}