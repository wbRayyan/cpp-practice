#include <iostream>
using namespace std;

int main() {
    cout << "Hello Friends!" << endl;
    cout << "We will calculate SI(Simple Interest) today by using P*R*I" << endl;
    int P, R, I;
    cout << "Enter the Principal Amount: ";
    cin >> P;
    cout << "Enter the Rate of Rate: ";
    cin >> R;
    cout << "Enter the Time Period: ";
    cin >> I;
    cout << "The Simple Interest is: " << (P * R * I) / 100 << endl;



    return 0;
}