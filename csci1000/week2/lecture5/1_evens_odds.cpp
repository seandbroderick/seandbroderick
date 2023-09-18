#include<iostream>
using namespace std;

//program to check if the number is even or odd

int main(){

int number = 0;
cout << "Enter a number: ";
cin >> number;


if (number % 2 == 0){
    if(number == 0){
        cout << "0 is neither positive nor negative" << endl;
        return 0;
    }
    cout << "Your number is even!" << endl;
} else {
    cout << "Your number is odd!" << endl;
}

    return 0;
}