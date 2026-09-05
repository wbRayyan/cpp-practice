#include <iostream>
using namespace std;

int main() {
    cout << "Enter the numbers of array = ";
    int size;
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of the array = ";
        cin >> arr[i];
    }

    int sum=0 , prod=1;

    for(int i=0 ; i<size ; i++){
        sum = arr[i] + sum;
        prod = arr[i] * prod;
    }

    cout << "The sum of the array is = " << sum << endl;
    cout << "The prod of the array is = " << prod << endl;
    return 0;
}