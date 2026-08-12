#include <iostream>
using namespace std;

int main() {
    cout << "Hello Friends!" << endl;
    cout << "We will calculate SI(Simple Interest) today by using P*R*I" << endl;
    int P, R, I, SI;
    cout << "Enter the Principal Amount: ";
    cin >> P;
    cout << "Enter the Rate of Rate: ";
    cin >> R;
    cout << "Enter the Time Period: ";
    cin >> I;
    SI = P*R*I;
    cout << "The Simple Interest is: " << SI << endl;
    return 0;
}