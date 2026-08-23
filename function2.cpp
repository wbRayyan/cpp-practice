#include <iostream>
using namespace std;

int sum(int n){
    int add = 0;
    for(int i=0 ; i<=n ;i++){
        add = add+i;
    }
    return add;
}

int main(){

    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    cout << sum(n);
    return 0;
    
} 