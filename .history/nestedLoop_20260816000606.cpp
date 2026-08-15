#include <iostream>
using namespace std;

int main() {
    char a = '*';
    cout << "Enter the number of stars you want in one line = ";
    int n;
    cin >> n;
    cout << "Enter the number of lines you want print = ";
    int m;
    cin >> m;
    for(int i=1 ; i<=n ; i++){

        for(int j=1 ; j<=m ; j++){
            cout << a << " "; 

        }
        cout << " " << endl;
    }
    return 0;
}