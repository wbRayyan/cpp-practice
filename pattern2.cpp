#include <iostream>
using namespace std;

int main() {
    cout << "[Remember, the sequence will print from character 'A' upto the char you insert] ... Enter the Character = ";
    char ch;
    cin >> ch;

    cout << "Enter the number of lines you want to print = ";
    int l;
    cin >> l;

    for(int i=1 ; i<=l ; i++){

        char pr='A';
        for(char j=65 ; j<=ch ; j++){
            cout << pr ;
            pr = pr+1;                    
        }

    cout << "" <<endl;
    }
}