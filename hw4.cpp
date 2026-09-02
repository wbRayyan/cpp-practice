// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number you want to check whether its a power of '2' or not = ";
//     cin >> n;

//     for(int i=2 ; i>1 ; i++){
//         int num=2;
//         if(num*2 = n){
//             cout << n << " is a power of 2" << endl;
//         }else{
//             cout << n << " is not a power of 2" << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number you want to check whether it's a power of '2' or not = ";
    cin >> n;

    if (n <= 0) {
        cout << n << " is not a power of 2" << endl;
        return 0;
    }

    int temp = n;
    while (temp % 2 == 0) {
        temp /= 2;
    }

    if (temp == 1) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is not a power of 2" << endl;
    }

    return 0;
}