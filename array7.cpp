#include <iostream>
using namespace std;

int main() {
    cout << "Enter the numbers of students = ";
    int size;
    cin >> size;

    int marks[size];

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

    int indexSmallest;
    for(int i=0 ; i<size ; i++){
        if( marks[i] == smallest){
            indexSmallest = i;
        }
    }

    int indexLargest;
    for(int i=0 ; i<size ; i++){
        if( marks[i] == largest){
            indexLargest = i;
        }
    }

    cout << "Minimum marks achieved by a student is = " << smallest << endl;
    cout << "Index number for minimum is = " << indexSmallest << endl;
    cout << "Maximun marks achieved by a student is = " << largest << endl;
    cout << "Index number for maximun is = " << indexLargest << endl;
    return 0;
}