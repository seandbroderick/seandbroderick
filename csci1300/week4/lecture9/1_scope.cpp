#include<iostream> 
using namespace std;

// void display (){
//     int i = 10;
//      same variable name can be used in multiple functions
// }

int main(){
    
    int number = 10;
    int x = 10;

    cout << "X: " << x << endl;

    if (number >= 0){

        int x = 20; // declaring variable
        // scope of x here is only inside the if condition
        cout << "X: " << x << endl;

        char choice;

    }

    // choice = 'a';
    // will not work as choice is scoped inside the if statement
    
    return 0;

    // while using multiple variables with the same name is possible, 
    // avoid it to prevent any mistakes or oversights in code.
}