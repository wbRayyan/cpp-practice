#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int size = 5;

    for(int i=0 ; i<size ; i++){
        cout << "Enter the Marks of the Student " << i+1 << " = ";
        cin >> marks[i];
    }

    int max = INT_MIN;
    for(int i=0 ; i<size ; i++){
        if(marks[i] > max){
            max = marks[i];
        }
    }

    cout << "Maximum marks achieved by a student is = " << max << endl;
    return 0;
}