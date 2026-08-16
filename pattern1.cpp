#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n, seq=0;
    cin >> n;

    for(int i=1 ; i<=n ; i++){

        for(int j=1 ; j<=n ; j++){
            cout << j ;                     // agar [123    456     789] krwana hota too (int seq=0) (seq += j;) (cout << seq;)
        }
    cout << "" <<endl;
    }
}