

#include <iostream>

using namespace std;

int main(){
    
    int number1 = 0;
    int number2 = 0;
    
    //description for what the program is asking for
    cout << "Enter a number: ";
    
    //console input
    // >> -> deletion operator
    //  cin >> number1;
    //  cin >> number2;
    cin >> number1 >> number2;
    
    cout << "Num1 = " << number1 << " Num2 = " << number2 << endl;

    return 0;
}