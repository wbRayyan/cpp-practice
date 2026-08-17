#include <iostream>
using namespace std;

int main(){
    // USING FOR LOOP
    cout << "Enter the number = ";
    int n , seq=1;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout << seq << " ";
            seq++;
        }
    cout << endl;
    }


    cout << "Enter the number = ";
    int a;
    char seq2='A';
    cin >> a;
    
    for(int b=0 ; b<a ; b++){
        for(int c=0 ; c<b+1 ; c++){
            cout << seq2 << " ";
            seq2++;
        }
    cout << endl;
    }

    return 0;
}
