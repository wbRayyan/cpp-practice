#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int size = 5;

    for(int i=0 ; i<size ; i++){
        cout << "Enter the Marks of the Student " << i+1 << " = ";
        cin >> marks[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0 ; i<size ; i++){
        smallest = min(marks[i] , smallest);
        largest = max(marks[i] , largest);
    }

    cout << "Minimum marks achieved by a student is = " << smallest << endl;
    cout << "Maximun marks achieved by a student is = " << largest << endl;
    return 0;
}