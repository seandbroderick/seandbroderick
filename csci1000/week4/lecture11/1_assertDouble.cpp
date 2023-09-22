#include<iostream>
#include<iomanip> 
#include<math.h>
#include<cassert>
using namespace std;


double areaOfCircle(double r){
    
    const double PI = 3.14;
    double area = PI * pow(r,2);

    return area; // gives the output
}

int main(){

    double radius = 0;

    cout << "Enter the radius: ";
    cin >> radius;

    double area = areaOfCircle(radius); 

    assert(areaOfCircle(8) == 200.96);
    assert(areaOfCircle(0) == 0);
    assert(areaOfCircle(-8) == 200.96);

    cout << "Area: " << area;

    return 0;
}