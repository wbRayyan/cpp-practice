#include <iostream>
using namespace std;

int main() {
    int i=1 , sum=0 , n;
    cout << "Enter the number = ";
    cin >> n;
    
    for(i; i<=n; i++){
        if(i%2!=0){  //   [ if(i%2==0){ ] FOR SUM OF EVEN NUMBERS
            sum += i;
        }
    }

cout << "The sum of all odd number upto " << n << " is " << sum ;
    return 0;
}