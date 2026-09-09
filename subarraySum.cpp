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


    int maxSum = INT_MIN;
    for(int st=0 ; st<size ; st++){
        int currSum = 0;
        for(int end=st ; end<size ; end++){
            currSum += arr[end];
            maxSum = max(currSum , maxSum);
        }
    }
    cout << "The max subarray sum is = " << maxSum;
    return 0;
}