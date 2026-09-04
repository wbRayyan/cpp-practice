#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of array = ";
    int size;
    cin >> size;

    int marks[size];
    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " number = ";
        cin >> marks[i];
    }

    cout << "Enter the number you want to search = ";
    int n;
    cin >> n;

    int indexSmallest;
    for(int i=0 ; i<size ; i++){
        if( marks[i] == n){
            indexSmallest = i;
        } else {
            indexSmallest = -1;
        }
    }
    cout << "Index number for your given number is = " << indexSmallest << endl;
}