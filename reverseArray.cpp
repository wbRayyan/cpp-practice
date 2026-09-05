#include <iostream>
using namespace std;

void reverseArray(int arr[] , int size){
    int start = 0 , end = size-1;

    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

}
    
int main() {

    cout << "Enter the size of array = ";
    int size , targest;
    cin >> size;

    int arr[size];
    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of array = ";
        cin >> arr[i];
    }
    
    reverseArray(arr , size);

    cout << "The reverse of the array is = ";
    for(int i=0 ; i<size ; i++){
        cout <<arr[i];
    }    
    
    return 0;
}