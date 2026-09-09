#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the size of array = ";
    int size;
    cin >> size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout << "Enter the " << i+1 << " element of array = ";
        cin >> arr[i];
    }

    for(int st=0 ; st<size ; st++){
        for(int end=st ; end<size ; end++){
            for(int i=st ; i<=end ; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}