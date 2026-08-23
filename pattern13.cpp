#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n;
    cin >> n;

    // OUTER ya UPPER PART
    for (int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++){
            cout << "*";
        }
        cout << " ";

        if(i != n){
            for(int j=0 ; j<2*i-1 ; j++){
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;

    }


    // INNER ya LOWER PART
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout << " ";

        }

        cout << "*";

        if(i != n-2){
            for(int j=0 ; j<2*(n-i)-5 ; j++){
                cout << " ";

            }
            cout << "*";

        }
        cout << endl;

    }


    return 0;
}