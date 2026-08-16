#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n;
    cin >> n;
    
    int seq = 1;

    for(int i=1 ; i<=n ; i++){
        for(int j=0; j<n ; j++){
            cout << seq ;
            seq++;                  
        }
    cout << "" <<endl;
    }
}