#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number = ";
    // char ch='A';
    int n;
    char seq =65;
    cin >> n;

    for(int i=0 ; i<n ; i++ ){
        for(int j=0 ; j<n ; j++){
            cout << seq << "";
            seq++;
        }
        cout << endl;
    }
    return 0;
}