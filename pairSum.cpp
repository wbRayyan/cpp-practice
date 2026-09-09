#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums , int target){
    vector<int> ans;
    int n = nums.size();

    for(int i = 0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;

            }
        }

    }
    return ans;
}

int main() {
    cout << "Enter the size of array = ";
    int size;
    cin >> size;

    vector<int> nums;

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of array = ";
        int val;
        cin >> val;
        nums.push_back(val);
    }

    cout << "Enter the target you want to find = ";
    int target;
    cin >> target;

    vector<int> ans = pairSum(nums , target);
    cout << "The indexes of numbers whose pairSum = "<< target << " are " <<  ans[0] << ", " << ans[1] << endl;
    cout << "The Numbers whose pairSum = "<< target << " are " <<  nums[ans[0]] << ", " << nums[ans[1]] << endl;
    return 0;
}