#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n, sum=0;
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        if( i%3==0 ) {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}