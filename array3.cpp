#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int size = 5;

    for(int i=0 ; i<size ; i++){
        cout << "Enter the Marks of the Student " << i+1 << " = ";
        cin >> marks[i];
    }

    for(int i=0 ; i<size ; i++){
        cout << "Marks of the Student " << i+1 << " = ";
        cout << marks[i] <<endl;
    }
    return 0;
}