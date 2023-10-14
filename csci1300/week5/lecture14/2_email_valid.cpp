#include<iostream> 

using namespace std;

/**
 * string traversal -> counting -> for loop
 * 
 * accept user input for email_id (string)
 * loop through letters in email_id
 *     check if letter is equail to '@'
 *         print valid email
 *     if @ is not present
 *         print invailid email
*/

int main(){
    
    string email_id;
    cout << "Enter email: " << endl;
    getline(cin, email_id);

    // flag variable -> status/boolean check
    // flag, valid, check, done

    bool flag = false; // 0
    
    for(int i = 0; i < (int) email_id.length(); i++){
        if(email_id[i] == '@'){
            // cout << "Valid email!" << endl;
            flag = true; // valid email
            break; // count controlled loops can be terminated through a break statement
        }
    }

    // after the loop, check if @ was found
    if(flag){
        cout << "Valid email!" << endl;
    } else {
        cout << "Invalid email!" << endl;
    }
     
    return 0;
}
