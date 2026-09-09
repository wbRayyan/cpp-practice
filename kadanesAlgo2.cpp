#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the size of array = ";
    int size;
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of array = ";
        cin >> arr[i];
    }


    int currSum = 0, maxSum = INT_MIN;
    for(int i=0 ; i<size ; i++){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0){
            currSum == 0;
        }
    }
    cout << "The max subarray sum is = " << maxSum;
    return 0;
}