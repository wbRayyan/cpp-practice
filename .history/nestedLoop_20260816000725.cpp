#include <iostream>
using namespace std;

int main() {
    char a = '*';
    cout << "Enter the number of stars you want in one line = ";
    int m;
    cin >> m;
    cout << "Enter the number of lines you want print = ";
    int n;
    cin >> n;


    for(int i=1 ; i<=n ; i++){

        for(int j=1 ; j<=m ; j++){
            cout << a << " "; 
        }
        cout << " " << endl;
    }
    return 0;
}