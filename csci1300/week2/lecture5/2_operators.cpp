#include<iostream> 
#include<math.h>
using namespace std;
int main(){
    
    // logical/boolean operators

    // &&, ||, !,

    // AND STATEMENT
    // 10 > 0 && 11 > 0 = true
    // true && true = true
    // false && true = false
    // all expressions must be true to output a true boolean

    // OR STATEMENT
    // 10 > 0 || 11 > 0
    // true || true = true
    // false || true = true
    // false || false = false
    // all expressions must be false to output a false boolean

    // NOT STATEMENT
    // !(10 > 0) = !(true) = false

    // 1,2,3...9 -> 1 digit
    // 10,11,12...99 -> 2 digits

    int number = 0;
    bool x = true;
    int y = 0;

    cout << "Enter a number: ";
    cin >> number;

    //validating user input

    while(x==true){
        y=y+1;
        if(abs(number) < pow(10.0, (double) y)){
            cout << number << " is a "<< y <<" digit number." << endl;
            x = false;
            return 0;
        }
    }

    return 0;
}