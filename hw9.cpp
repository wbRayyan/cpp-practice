#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of array 1 = ";
    int size;
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " elements of the array 1 = ";
        cin >> arr[i];
    }

    cout << "Enter the size of array 2 = ";
    int size2;
    cin >> size2;

    int arr2[size2];

    for(int i=0 ; i<size2 ; i++){
        cout << "Enter the " << i+1 << " elements of the array 2 = ";
        cin >> arr2[i];
    }

    cout << "The intersection of array 1 & array 2 is = [ ";

    for (int i = 0; i < size; i++) {
        bool isFound = false; // Maan letay hain ke yeh doosri array me nahi hai

        // Doosri array ke saare elements me dhoondo
        for (int j = 0; j < size2; j++) {
            if (arr[i] == arr2[j]) {
                isFound = true;  // Match mil gaya!
                break;           // Aage mazeed dhoondne ki zaroorat nahi
            }
        }

        // Agar doosri array me mil gaya tha, to print kardo
        if (isFound == true) {
            cout << arr[i] << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}