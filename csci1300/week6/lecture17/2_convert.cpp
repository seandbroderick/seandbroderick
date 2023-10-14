#include<iostream> 

using namespace std;


// section 6.2 -> average, sum, max, min, insert, remove, etc.

// program to convet user input in kilograms into pounds


void demo(int x){
    int y = x*2;
    x++; // doesn't change the value of SIZE
    cout << y;
}

int main(){
    
    // using a variable instead so that any loops involving the kg array can be updated from the top
    const int SIZE = 3;
    double kg[SIZE] = {}; // initializes all elements in array to zero
    double pounds[SIZE] = {};
    
    demo(SIZE); // passes the value of size -> passing by value

    // user input
    int i = 0;
    do{
        cout << "Enter number (kg): ";
        cin >> kg[i];
        i++;
    } while (i < SIZE); // i < 3

    // populate the pounds array
    // 1 kg = 2.205 pounds
    for(int j = 0; j < SIZE; j++){
        pounds[j] = kg[j] * 2.205;
    }
    // prints contents
    for(int j = 0; j < SIZE; j++){
        cout << pounds[j] << endl;
    }

    return 0;
}