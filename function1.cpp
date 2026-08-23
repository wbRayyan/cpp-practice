#include <iostream>
using namespace std;

int min(int a, int b){
    int m;

    if(a>b){
        m=a;
        cout << "B is minimun and B = " << b;
    } else if (a==b){
        m=a;
        cout << "A & B are same ... A = " << a << " & B = " << b;
    } else {
        m=b;
        cout << "A is minimun and A = " << a;
    }
    return m;
}

int main(){
    int a,b;
    cout << "Enter the value of A = ";
    cin >> a;
    cout << "Enter the value of B = ";
    cin >> b;
    min(a,b);
    return 0;
    
} 