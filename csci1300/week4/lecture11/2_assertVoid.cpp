#include<iostream>
#include<iomanip> 
#include<math.h>
#include<cassert>
using namespace std;


void areaOfCircle(double r){
    
    const double PI = 3.14;
    double area = PI * pow(r,2);
    cout << area << endl;
   
}

int main(){

    double radius = 0;

    cout << "Enter the radius: ";
    cin >> radius;

    areaOfCircle(radius); 

    //testing void functions -> function call with the expected output in comments

    areaOfCircle(8); // 200.56
    areaOfCircle(0); // 0
    areaOfCircle(-8); // 200.56

    return 0;
}