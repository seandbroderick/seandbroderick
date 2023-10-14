#include<iostream>

using namespace std;

/**
 * program to check if login ID is valid
 * 
 * accept a login ID
 * user gets 3 attempts
 * loop as long as attempts are remaining
 *      check if login ID matches an ID in records
 *          if true print sucessfull
 *      login doesnt match
 *          if false prompt to try again, display attempts remaining, remove an attempt, provide textbox for login ID
 * exit program
*/

int main(){
    
    string login_name;
    int attempts = 0; // assume they have 3 attempts
    string actual_login = "patrick_2023";

    

    while(attempts < 3){
        cout << "Enter login ID: " << endl;
        getline(cin,login_name);
        if(login_name == actual_login){
            cout << "Login successful!" << endl;
            attempts = 3; // loop must terminate at every branch -> use the condition to terminate
        } else {
            attempts++;
            cout << "Login failed!" << endl;
            cout << "Attempts remaining: " << 3 - attempts << endl;
        }

    }    
    
    return 0;
}