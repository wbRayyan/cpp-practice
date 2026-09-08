#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "Size of vec = " << vec.size() << endl;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << "Size of vec after push-back = " << vec.size() << endl;
    cout << "Capacity of vec after pusdh-back= " << vec.capacity() << endl;

    vec.push_back(3);
    vec.push_back(4);

    cout << "Size of vec after push-back-V2 = " << vec.size() << endl;
    cout << "Capacity of vec after pusdh-back-V2 = " << vec.capacity() << endl;

    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);

    cout << "Size of vec after push-back-V3 = " << vec.size() << endl;
    cout << "Capacity of vec after pusdh-back-V3 = " << vec.capacity() << endl;

    return 0;
}