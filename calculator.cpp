#include <iostream>
using namespace std;

int main() {
    cout << ".......!!!!!!!!!     CALCULATOR     !!!!!!!!!.......\n";
    double a , b;
    cout << "Enter the first digit\n";
    cin >> a;
    cout << "Enter the second digit\n";
    cin >> b;

    double Sum, Difference, Product, Division, Modulo;

    Sum = a + b;
    Difference = a - b;
    Product = a * b;
    Division = a / b;
    Modulo = (int)a % (int)b;

    cout << "Sum of " << a << " & " << b << " is " << Sum << endl;
    cout << "Difference of " << a << " & " << b << " is " << Difference << endl;
    cout << "Product of " << a << " & " << b << " is " << Product << endl;
    cout << "Division of " << a << " & " << b << " is " << Division << endl;
    cout << "Modulo of " << a << " & " << b << " is " << Modulo << endl;
    return 0;
}
