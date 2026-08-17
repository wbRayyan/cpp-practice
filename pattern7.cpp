#include <iostream>
using namespace std;

int main(){
    // USING FOR LOOP
    cout << "Enter the number = ";
    int n;
    char ch = 'A';
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout << ch << " ";
        }
        ch++;
    cout << endl;
    }

    return 0;
}
