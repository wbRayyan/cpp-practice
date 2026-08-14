#include <iostream>
using namespace std;

int main() {
    cout << ".......!!!!!!!!!     CALCULATOR     !!!!!!!!!......." << endl;
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

    cout << "Sum of " << a << " & " << b << " is " << Sum;
    cout << "Difference of " << a << " & " << b << " is " << Difference;
    cout << "Product of " << a << " & " << b << " is " << Product;
    cout << "Division of " << a << " & " << b << " is " << Division;
    cout << "Modulo of " << a << " & " << b << " is " << Modulo;
    return 0;
}
