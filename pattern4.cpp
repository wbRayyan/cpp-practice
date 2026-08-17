#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number = ";
    int n,i=0;
    cin >> n;
    int seq=1;
    
    while(i<n) {
        for(int j=0 ; j<n ; j++){
            cout << seq << "";
            seq++;
        }
        i++;
        cout << "" << endl;
    }
    return 0;
}