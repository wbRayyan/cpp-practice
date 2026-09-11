#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "Enter the size of vector = ";
    int size;
    cin >> size;

    vector<int> nums;

    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " element of array = ";
        int val;
        cin >> val;
        nums.push_back(val);
    }

    if(size == 1){
        cout << "The major element of this array/vector is = " << nums[0] << endl;
        return 0;
    }

    int freq=0 , ans=0;

    for(int i=0 ; i<size ; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else {
            freq--;
        }
    }
    cout << "The major element of this array/vector is = " << ans << endl;
}