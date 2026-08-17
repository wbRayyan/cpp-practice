#include <iostream>
using namespace std;

int main(){
    // USING FOR LOOP
    cout << "Enter the number = ";
    int n;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout << '*' << " ";
        }
    cout << endl;
    }

    // USING WHILE LOOP
    cout << "Enter the number = ";
    int b , l=0;
    cin >> b;

    while(l<b){
        int s=0;
        while(s<l+1){
            cout << '*' << " " ;
            s++;
        }
        cout << endl;
        l++;
    }




    return 0;
}