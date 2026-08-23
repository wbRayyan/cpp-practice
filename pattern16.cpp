// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter the number = ";
//     int n;
//     cin >> n;

//     // UPER PART
//     for (int i=0 ; i<n ; i++) {
//         for(int j=0 ; j<=i ; j++){
//             cout << "* " ;
//         }
//         if(i != n-1 ){
//             for(int j=0 ; j<2*n-2-2*i ;j++){
//             cout << " ";
//             }
//         }
//         for(int j=0 ; j<=i ; j++){
//             cout << "* " ;
//         }
//         cout << endl;
//     }

//     //BOTTOM PART
//     for (int i=0 ; i<n ; i++) {

//         for(int j=0 ; j<n-1-i ; j++){
//             cout << "* " ;
//         }

//         if(i != n-1 ){
//             for(int j=0 ; j<2*i+2 ;j++){
//             cout << " ";
//             }
//         }

//         for(int j=0 ; j<n-1-i ; j++){
//             cout << "* " ;
//         }
    
//     cout << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number = ";
    int n;
    cin >> n;

    // TOP PART
    for (int i=0 ; i<n ; i++) {
        // pehle wale *
        for(int j=0 ; j<=i ; j++){
            cout << "* ";
        }
        // beech wale space
        if(i != n-1){
            for(int j=0 ; j<2*n - 2 - 2*i ; j++){
                cout << "  ";  // 2 space
            }
        }
        // baad wale *
        for(int j=0 ; j<=i ; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // BOTTOM PART
    for (int i=0 ; i<n ; i++) {
        // pehle wale *
        for(int j=0 ; j<n-1-i ; j++){
            cout << "* ";
        }
        // beech wale space - yahan if nahi hai
        for(int j=0 ; j<2*i + 2 ; j++){  
            cout << "  ";  // 2 space
        }
        // baad wale *
        for(int j=0 ; j<n-1-i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}