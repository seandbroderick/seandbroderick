#include<iostream> 

using namespace std;

// when working with loops, adding/subtracting a value of 1 is very common

int main(){
    
    // section 2.2.2 in textbook
    // pre/post increment

    int num_1 = 10;
    // num_1 = num_1 + 1;
    // num_1 += 1; // same as line 13

    // num_1 ++; //same as line 13
    // calculating and returning a value

    // num_1 = 10
    // int x = num_1 * 2; // 20

    // ++ following a variable is a post increment -> happens after other computations
    int result = num_1 ++ * 2; // 20
    // 1. num_1 * 2 -> 20
    // 2. num_1 = num_1 + 1 -> 11
    // 3. result = 20

    cout << "num_1: " << num_1 << endl;
    cout << "result: " << result << endl;


    // int num_1 = 11;
    int result_2 = ++ num_1 * 2;
    cout << "num_1: " << num_1 << endl;
    cout << "result_2: " << result_2 << endl;
    // 1. num_1 = num_1 + 1 -> 11 + 1 -> 12
    // 2. num_1 * 2 -> 24
    // 3. result_2 = 24

    // x = 5. y = 3 , z = 9
    // int result = (x++ * 3) - (++y + 3) * (z-- - 2) + (++x * 6) // nonsense -> don't do this


    // pre/post decrement
    // same concept with subraction instead of addition

    return 0;
}
