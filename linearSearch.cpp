#include <iostream>
using namespace std;

int linearSearch(int arr[] , int size , int target){
    for(int i=0 ; i<size ; i++){
        if( arr[i] == target ){
            return i;
        }
    }
    return -1;

}

int main() {

    cout << "Enter the size of = ";
    int size , targest;
    cin >> size;

    int arr[size];
    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of array = ";
        cin >> arr[i];
    }

    cout << "Enter the targest you want to find = ";
    cin >> targest;
    
    cout << linearSearch(arr , size , targest ) << endl;
    return 0;
}