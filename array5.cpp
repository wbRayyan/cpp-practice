#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int size = 5;

    for(int i=0 ; i<size ; i++){
        cout << "Enter the Marks of the Student " << i+1 << " = ";
        cin >> marks[i];
    }

    int min = INT_MAX;
    for(int i=0 ; i<size ; i++){
        if(marks[i] < min){
            min = marks[i];
        }
    }

    cout << "Minimum marks achieved by a student is = " << min << endl;
    return 0;
}