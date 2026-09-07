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
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);

    cout << "Size of vec after PUSH BACK = " << vec.size() << endl;

    for(int val : vec){
        cout << val << endl;;
    }

    vec.pop_back();
    vec.pop_back();

    cout << "Size of vec after POP BACK = " << vec.size() << endl;

    for(int val : vec){
        cout << val << endl;;
    }

    return 0;
}