#include<iostream>
#include<iomanip> // setprecision()
#include<cmath> // sqrt, sin, cos, tan, pow,
using namespace std;

// functions -> takes an input and produces an output (does something with inputs and outputs)
//              a sequence of instructions with a name, 
//              packages a computation into a form that can be easily undersood and reused.

// 2 types of functions
// built-in function -> written by someone else that can be accessed through external libraries
//                      added using the include directive


int main(){ // -> main function
    
    // () -> often mean a function is present
    // setprecision() -> function that takes a value

    double number = 0, number2 = 0, power = 0;

    cout << "Enter a number: ";
    cin >> number;
    
    double answer = sqrt(number); // function call
    //                          functionName(function arguments / actual parameters / function inputs);
    //                          functions typically have an input and an output

    cout << answer << endl;

    cout << "Enter a number: ";
    cin >> number2;
    cout << "Enter a power: ";
    cin >> power;
    
    double answer2 = pow(number2, power);

    cout << answer2 << endl;








    return 0;
}