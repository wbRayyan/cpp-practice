#include <iostream>
using namespace std;

void reverseArray(int arr[] , int size , int indexSmallest , int indexLargest){
        swap(arr[indexSmallest] , arr[indexLargest]);
}

int main() {
    cout << "Enter the numbers of array = ";
    int size;
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << "element of the array = ";
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0 ; i<size ; i++){
        smallest = min(arr[i] , smallest);
        largest = max(arr[i] , largest);
    }

    int indexSmallest;
    for(int i=0 ; i<size ; i++){
        if( arr[i] == smallest){
            indexSmallest = i;
        }
    }

    int indexLargest;
    for(int i=0 ; i<size ; i++){
        if( arr[i] == largest){
            indexLargest = i;
        }
    }


    reverseArray(arr , size , indexSmallest , indexLargest);

    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}