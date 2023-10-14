#include<iostream>
#include<iomanip> 
#include<math.h>
#include<cassert>

using namespace std;

bool doublesEqual(double a, double b, const double epsilon = 1e-14);

int main(){
    
    double var = sqrt(2);
    double result = var * var; // 2
    cout << fixed << setprecision(20) << result << endl; // results something like 2.000000000000000183
    assert(doublesEqual(result, 2));
     
    return 0;
}


// function that defines the level of precision in assert comparisons
// default argument (const double epsilon defined in parameters)
bool doublesEqual(double a, double b, const double epsilon = 1e-12){ // 14 is when problems start arising
    double c = a - b;
    return c < epsilon && -c < epsilon;
}