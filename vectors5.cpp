#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout << "Size of vec = " << vec.size() << endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "Size of vec after PUSH BACK = " << vec.size() << endl;

    for(int val : vec){
        cout << val << endl;;
    }

    return 0;
}