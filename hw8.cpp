#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of array = ";
    int size;
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of the array = ";
        cin >> arr[i];
    }

    cout << "The unique elements of this array are = [ ";

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Poori array me baqi elements se compare karein
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // Agar kisi aur se match nahi mila, to print karein
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << "]" << endl;

    return 0;
}