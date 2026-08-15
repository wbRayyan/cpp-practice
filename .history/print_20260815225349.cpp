#include <iostream>
using namespace std;

int main() {
    int start = 1;
    cout << "Enter the number\n";
    int n;
    cin >> n;

    while ( start <= n ){
        cout << start+start << endl;
        start++;
    }

    return 0;
}