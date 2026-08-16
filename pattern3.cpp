#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n , seq=1;
    cin >> n;

    for(int i=1 ; i<=n ; i++){

        for(int j=1 ; j<=n ; j++){
            cout << seq ;
            seq += 1;                  
        }
    cout << "" <<endl;
    }
}