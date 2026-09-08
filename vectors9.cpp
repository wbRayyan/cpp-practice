#include <iostream>
#include <vector>
using namespace std;

int SingleNum(vector<int> vec){
    int ans = 0;

    for(int val : vec){
        ans = ans ^ val;
    }
    return ans;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 4, 3, 2, 1, 7};
    cout << SingleNum(vec);

    
    return 0;
}