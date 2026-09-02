#include <iostream>
using namespace std;

int reverseOfANum(int n) {
    int rev = 0;
    
    while (n > 0) {
        int rem = n % 10;        // Aakhri digit nikaala (jaise 125 mein se 5)
        rev = (rev * 10) + rem;  // Puraane digits ko left shift kiya aur naya jora
        n = n / 10;              // Aakhri digit remove kiya (125 ban gaya 12)
    }
    
    return rev;
}

int main() {
    int n;
    cout << "Enter the number you want to reverse = ";
    cin >> n;
    
    cout << reverseOfANum(n) << endl;

    return 0;
}