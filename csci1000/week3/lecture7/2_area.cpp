#include<iostream>
#include<iomanip> 
#include<math.h>
using namespace std;

// return type(data type) functionName(function/formal parameters){  -> function declaration
    // function implementation
//} outputs functionName(inputs)



/**
 * @brief computing the area of the circle
 * 
 * @param radius (double) of circle
 * @return double -> area of the circle
 * optional pseudocode
 * 
*/
double areaOfCircle(double r){
    
    const double PI = 3.14159;
    double area = PI * pow(r,2);

    return area; // gives the output
}

// scope -> area within which you can access something (a variable)
// for example double 'r' cannot be acsessed outside areaOfCircle(), 'r' has a local scope.

double area2 = 0; // global variable / scope
// can be accessed anywhere/inside any function in this program
// this is generally not good programing practice
// constant global variables are still poor practice, while not as bad

// put functions above main -> define the function before attempting to use it
int main(){

    // area = pi*r*r
    double radius = 0;

    cout << "Enter the radius: ";
    cin >> radius;

    double area = areaOfCircle(radius); // ideal way to call a function that is returning something

    cout << "Area: " << area;

    return 0;
}