#include<iostream> 

using namespace std;


int main(){
    
    int number = 0;
    cout << "Enter number: ";
    cin >> number;
    //check for cin state after every cin call

    // cin.fail() -> returns true if cin is in a failed state

    if(cin.fail()){
        cout << "cin failed state" << endl;
        // return 1;
    }
    // to fix failstate, reset the buffer
    // reset the state of cin

    cin.clear(); // clears the failstate of cin

    //make sure that the cursor moves on ahead
    cin.ignore(1000, '\n'); // some arbitrary number
    //moves 1000 spaces ahead and use the new line as breakpoint ('\n' -> newline)



    cout << number << endl;
    // if a different input is entered, FAILED STATE -> no longer acept any more input until we clear the state

    string name;
    cout << "Enter name: ";
    cin >> name;
     
    return 0;
}