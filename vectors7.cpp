#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout << "Size of vec = " << vec.size() << endl;

    vec.push_back(9563);
    vec.push_back(49613);
    vec.push_back(1316548);
    vec.push_back(78451);
    vec.push_back(454);

    cout << "Size of vec after PUSH BACK = " << vec.size() << endl;

    for(int val : vec){
        cout << val << endl;;
    }

    cout << "The first element of vector is = " << vec.front() << endl;
    cout << "The last element of vector is = " << vec.back() << endl;
    cout << "The third element of vector is = " << vec.at(2); //Third val find karni too index 2 lena paray ga
    return 0;
}