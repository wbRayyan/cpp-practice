#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n;
    cin >> n;

    for (int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n-i-1 ; j++){
            cout << " ";
        }

        for(int j=1 ; j<=i+1 ; j++){
            cout << j;
        }

        for(int j=i ; j>=1 ; j--){
            cout << j;
        }

    cout << endl;
         
    }

    return 0;
}