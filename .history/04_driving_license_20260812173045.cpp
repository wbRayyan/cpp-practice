#include <iostream>
using namespace std;

int main(){
    cout << "We will check whether the person is elligble for Driving License or not; " << endl; 
    cout << "Enter the name of person you want to check ; " << endl; 
    string name;
    cin >> name;
    cout << "Enter the age of person you want to check ; " << endl; 
    int age;
    cin >> age;

    if(age >= 18){
        cout << name << "is allowed for license";
    }
    else{
        cout << name << "is not-allowed for license";
    }
    return 0;
}