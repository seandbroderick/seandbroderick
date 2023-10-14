#include<iostream> 

using namespace std;

//ascii table: https://www.rapidtables.com/code/text/ascii-table.html

// function to check if the input is an uppercase letter

bool isUpperCase(char letter2); // function prototype/signature
// void printUpperCase(char letter);
// declares functions above main without having the actual functions written above main

// must be above main()


int main(){
    
    char letter = 'M';

    // printUpperCase(letter);

    bool check = isUpperCase(letter);

    if(check){
        cout << "Uppercase" << endl;
    } else {
        cout << "Not uppercase" << endl;
    }
    
    return 0;
}

// generic function -> can be reused as it is in many functions
bool isUpperCase(char letter2){
    if(letter2 >= 65 && letter2 <= 90){
        return true;
    } else {
        return false;
    }
}

// not generic function -> much more difficult to reuse
// void printUpperCase(char letter){
//     if(letter >= 65 && letter <= 90){
//         cout << "Uppercase" << endl;
//     } else {
//         cout << "Not uppercase" << endl;
//     }
// }