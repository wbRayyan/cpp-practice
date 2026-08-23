#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n;
    cin >> n;

    // UPER PART
    for (int i=0 ; i<n ; i++) {
        for(int j=0 ; j<=i ; j++){
            cout << "* " ;
        }
        if(i != n-1 ){
            for(int j=0 ; j<2*n-2-2*i ;j++){
            cout << "5 ";
            }
        }
        for(int j=0 ; j<=i ; j++){
            cout << "* " ;
        }
        cout << endl;
    }

    //BOTTOM PART
    // for (int i=0 ; i<n ; i++) {

    //     for(int j=n ; j>0 ; j--){
    //         cout << "* " ;
    //     }
    //     int j=j-1;

    //     if(i != 1 ){
    //         for(int j=0 ; j<2*i ;j++){
    //         cout << "5 ";
    //         }
    //     }

    //     for(int j=n ; j>0 ; j--){
    //         cout << "* " ;
    //     }
    
    // cout << endl;
    // }

    return 0;
}