#include<iostream> 
#include<cassert>

using namespace std;

/**
 * check if number is divisible by 3 and 5 then return fizzbuzz
 * check if number is divisible by 3 then return fizz
 * check if number is divisible by 5 then return buzz
 * otherwise return the number itself
*/

string fizzBuzz(int number);

int main(){
    
    assert(fizzBuzz(2) == "2");
    cout << "function passed for 2" << endl;

    assert(fizzBuzz(3) == "fizz");
    cout << "function passed for 3" << endl;    

    assert(fizzBuzz(5) == "buzz");
    cout << "function passed for 5" << endl;

    assert(fizzBuzz(15) == "fizzbuzz");
    cout << "function passed for 15" << endl;
    

    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    string output = fizzBuzz(number);
     
    cout << output;

    return 0;
}

string fizzBuzz(int number){
    if (number % 3 == 0 && number % 5 == 0){
        return "fizzbuzz";
    } else if (number % 3 == 0){
        return "fizz";
    } else if (number % 5 == 0){
        return "buzz";
    } else {
        return to_string(number);
        // to_string(int/double) -> converts numeric value into equivalent string form
    }
}