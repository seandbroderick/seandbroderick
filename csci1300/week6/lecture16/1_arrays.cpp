#include<iostream> 

using namespace std;

/**
 *  arrays
 * 
 *  data_type variable_name[size of array];
 * 
*/

int main(){
    
    // int x; // declare a variable
    // x = 1; // initialize a variable
    // int y = 0; // intitialize and declare
    
    // size cannot be modified once created
    // delcaring an int array of size 5
    // size -> always a positive integer
    int arr[5]; // -> can store 5 integers

    // indivigual element sinitialization
    arr[0] = 10;

    // initialize all elements in an array to 100
    for(int i = 0; i < 5; i++){
        arr[i] = 100;
    }

    // access arrays with the square brackets and a index value
    // strings -> arrays of characters
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    // int arr1[10] = {}; // initialize all elements to 0

    int arr2 [10] = {100, -3, 4}; // automatically initiallizes the rest of the array to zero
    
    


    // segmentation fault -> loops and arrays
    // error -> access something that you are not allowed to
    // out of bounds error -> runtime error

    for(int i = 0; i < 100; i++){
        cout << arr2[i] << endl;
    }

    return 0;
}
