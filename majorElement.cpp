#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the size of vector = ";
    int size;
    cin >> size;

    vector<int> nums;

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of array = ";
        int val;
        cin >> val;
        nums.push_back(val);
    }

    int n = nums.size();

    int ans = -1;
    for (int val : nums){
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            ans = val;
        }
    }
    if(ans != -1){
        cout << "The major element of this array/vector is = " << ans << endl;
    } else{
        cout << "Major Element not found" << endl;
    }
    return -1;
}