#include <iostream>
using namespace std;

int main(){
    //USING FOR LOOP
    cout << "Enter the number = ";
    int n;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout <<j+1 << " ";
        }
    cout << endl;
    }

    cout << "Enter the number = ";
    int a;
    cin >> a;
    
    for(int b=0 ; b<a ; a--){
        for(int c=0 ; c<a ; c++){
            cout <<c+1<< " ";
        }
    cout << endl;
    }

    return 0;
}
