#include<iostream> 
// assert statement -> macro defined in the cassert library
#include<cassert> // assert.h (legacy)

using namespace std;

//functions should be smaller, general rule of thumb is a function shouldn't span more than one page
int isValid(int number);

void testIsValid();

int main(){
    
// understand the problem
// develop and describe an algorithm (psuedocode)
// test the algorithm with simple inputs
// translate the algorithm into C++
// compile and test your program

/*
    Selecting test cases is an important skill
    - test inputs that a typical user might supply
    - boundary cases (rare cases)
*/

    // int number = 0;
    // cout << "Enter a number: ";
    // cin >> number;
    
    // write the assertions as a function
    testIsValid();

    // black box testing -> asserts and coderunner will work
    // give input, check if the function output matches the expected output
    // we do not know how the function is implemented
    // function prototype + return value
    // int isValid(int) -> -2 and 2

    // white box testing -> we have knowlage about the implementation
    // global variables, data types match the values on the right hand side

    return 0;
}

void testIsValid(){
    // checking if the function is working correctly before we integrate it into main()

    // assert(LHS == RHS) -> only works on functions with a non-void return type
    // LHS -> function call with the arguments/inputs
    // RHS -> expected function output

    //test case 1 -> valid input of 3 (>0)
    assert(isValid(3) == 2);
    cout << "Test case 1: passed" << endl;

    //test case 2 -> invalid input of -3 (<0)
    assert(isValid(-3) == -2);
    cout << "Test case 2: passed" << endl;

    //test case 3 -> valid input of 100000 (>0)
    assert(isValid(100000) == 2);
    cout << "Test case 3: passed" << endl;

    //test case 4 -> edge input of 0 (=0)
    assert(isValid(0) == -2);
    cout << "Test case 4: passed" << endl;
}

int isValid(int number){
    if(number <= 0){
        return -2; // making up our own value, as long as we know what that value is
    } else {
        return 2;
    }
}