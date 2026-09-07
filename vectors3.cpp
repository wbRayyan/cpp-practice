#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'A', 'B', 'C', 'D', 'E', 'F'};

    for(char val : vec){
        cout << val << endl;;
    }
    return 0;
}