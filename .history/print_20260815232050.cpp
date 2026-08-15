#include <iostream>
using namespace std;

int main() {
    int i=1 , sum=0 , n;
    cout << "Enter the number = ";
    cin >> n;
     while(i<=n){
        if(n%2==0){
            sum += i;
        }
        i++;
     }
     cout << "The sum of all even number upto " << n << " is " << sum ;
    return 0;
}