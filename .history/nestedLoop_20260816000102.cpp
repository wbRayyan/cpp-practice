#include <iostream>
using namespace std;

int main() {
    char a = '*';
    for(int i=1 ; i<+5 ; i++){
        for(int j=1 ; j<=5 ; j++){
            cout << a;
        }
        cout << " " << endl;
    }
    return 0;
}