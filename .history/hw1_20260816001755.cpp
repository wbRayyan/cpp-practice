#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n, sum=0;
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        if( n%3==0 ) {
            sum += i;
        }
    }

    return 0;
}