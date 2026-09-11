// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     cout << "Enter the size of vector = ";
//     int size;
//     cin >> size;

//     vector<int> nums;

//     for(int i=0 ; i<size ; i++){
//         cout << "Enter the " << i+1 << " element of array = ";
//         int val;
//         cin >> val;
//         nums.push_back(val);
//     }

//     int n = nums.size();
//     sort(nums.begin(), nums.end());

//     int freq = 1 , ans = nums[0];
//     for(int i = 1 ; i < n ; i++){
//         if(nums[1] == nums[n-1]){
//             freq++;
//         } else {
//             freq =1;
//             ans = nums[1];
//         }
//         if(freq = n/2){
//             return ans;
//             cout << "The major element of this array/vector is = " << ans << endl;
//         }
//     }
//     return 0;
// }
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

    int n = nums.size();
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];
    bool found = false;

    // Agar 1 hi element ho to wohi majority hoga
    if (n == 1) {
        cout << "The major element of this array/vector is = " << ans << endl;
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) { // current ko pichhle se compare karein
            freq++;
        } else {
            freq = 1;
            ans = nums[i]; // naye number par update karein
        }

        if (freq > n / 2) {
            cout << "The major element of this array/vector is = " << ans << endl;
            found = true;
            break; // Print karne ke baad loop rokein
        }
    }

    if (!found) {
        cout << "Major Element not found" << endl;
    }

    return 0;
}