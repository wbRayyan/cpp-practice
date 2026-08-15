#include <iostream>
using namespace std;

int main() {
    int i=1 , n , sum = 0;
    cout << "Enter the number = ";
    cin >> n;
    for(i; i<=n ; i++){
        sum += i;
    }
    cout << sum ;

    return 0;
}