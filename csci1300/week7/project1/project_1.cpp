// CSCI 1300 Fall 2023
// Author: Sean Broderick
// TA: Lin Shi
// Question 8

#include<iostream> 
#include<cassert>

using namespace std;

char shiftChar(char c, int shift){
    if(c <= 96 || c >= 123){
        return c;
    }
    int shiftc = c + shift;
    if(shiftc > 122){
        shiftc = (( shiftc - 122 ) % 26 ) + 96;
    } else if (shiftc < 97){
        shiftc = ((shiftc - 97) % 26 ) + 123;
    }
    return shiftc;
}

int getMethod2ShiftAmount(string key1){
    int len = key1.length(), computed_shift = 0;
    for(int i = 0; i < len; i++){
        if((key1[i] == 'a') || (key1[i] == 'e') || (key1[i] == 'i') || (key1[i]== 'o') || (key1[i] == 'u') || (key1[i] == 'y')){
            computed_shift++;
        }
        computed_shift++;
    }
    computed_shift = computed_shift % 26;
    return computed_shift;
}

int getMethod3ShiftAmount(string key1, string key2){
    int len1 = key1.length();
    int len2 = key2.length();
    int computated_shift = 0;
    for(int i = 0; i < len1; i++){
        for(int j = 0; j < len2; j++){
            if(key1[i] == key2[j]){
                computated_shift++;
            }  
        }
    }
    computated_shift = computated_shift % 26;
    return computated_shift;
}

char encryptChar(char c, int method_choice, string key1, string key2){
    char encrypted_char;
    if(method_choice == 1){
        encrypted_char = shiftChar(c, 1);
    } else if (method_choice == 2){
        int shift = getMethod2ShiftAmount(key1);
        encrypted_char = shiftChar(c, shift);
    } else if (method_choice == 3){
        int shift = getMethod3ShiftAmount(key1, key2);
        encrypted_char = shiftChar(c, shift);
    } else {
        cout << "Invalid encryption method" << endl;
        encrypted_char = c;
    }
    return encrypted_char;
}

char decryptChar(char c, int method_choice, string key1, string key2){
    char dencrypted_char;
    int shift = -1;
    if(method_choice == 1){
        dencrypted_char = shiftChar(c, shift);
    } else if (method_choice == 2){
        shift = shift * getMethod2ShiftAmount(key1);
        dencrypted_char = shiftChar(c, shift);
    } else if (method_choice == 3){
        shift = shift * getMethod3ShiftAmount(key1, key2);
        dencrypted_char = shiftChar(c, shift);
    } else {
        cout << "Invalid decryption method" << endl;
        dencrypted_char = c;
    }
    return dencrypted_char;
}

string encryptMessage(string message, int method_choice, string key1, string key2){
    string encryped_message = message;
    int len = message.length();
    if(method_choice == 1 || method_choice == 2 || method_choice == 3){
        for(int i = 0; i < len; i++){
            encryped_message[i] = encryptChar(message[i], method_choice, key1, key2);
        }
    } else if (method_choice == 4){
        int j = 1;
        for(int i = 0; i < len; i++){
            encryped_message[i] = encryptChar(message[i], j, key1, key2);
            j++;
            if(j == 4){
                j = 1;
            }
        }
    } else {
        cout << "Invalid encryption method" << endl;
        encryped_message = message;
    }
    return encryped_message;
}

string decryptMessage(string message, int method_choice, string key1, string key2){
    string decryped_message = message;
    int len = message.length();
    if(method_choice == 1 || method_choice == 2 || method_choice == 3){
        for(int i = 0; i < len; i++){
            decryped_message[i] = decryptChar(message[i], method_choice, key1, key2);
        }
    } else if (method_choice == 4){
        int j = 1;
        for(int i = 0; i < len; i++){
            decryped_message[i] = decryptChar(message[i], j, key1, key2);
            j++;
            if(j == 4){
                j = 1;
            }
        }
    } else {
        cout << "Invalid decryption method" << endl;
        decryped_message = message;
    }
    return decryped_message;
}



int main(){

    // menu
    bool active = true, key1tf = true, key2tf = true, methodtf = true, invalidtf = true;
    int choice = 0, method = 0;
    string key1 = " ", key2 = " ", message;
    while(active){
        if(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6){
            cout << "Please input 1-6 followed by enter to navigate the menu:" << endl;
            cout << "1. Set Encryption Key 1" << endl;
            cout << "2. Set Encryption Key 2" << endl;
            cout << "3. Select Encryption Method" << endl;
            cout << "4. Encrypt Message" << endl;
            cout << "5. Decrypt Message" << endl;
            cout << "6. Exit Program" << endl;
            cin >> choice;
            // clears cin for any getline statements below
            cin.clear();
            cin.ignore(100,'\n');
        }
        
        // if choice is 1, get a valid encription key
        if(choice == 1){
            choice = 0;
            key1tf = true;
            while(key1tf){
                cout << "Enter key:" << endl;
                getline(cin, key1);
                if(key1.length() < 1){
                    cout << "Invalid key" << endl;
                } else {
                    cout << "Successfully set encryption key1 to " << key1 << endl;
                    key1tf = false;
                }
            }
        } 
        // if choice is 2, get a valid encription key
        else if (choice == 2){
            choice = 0;
            key2tf = true;
            while(key2tf){
                cout << "Enter key:" << endl;
                getline(cin, key2);
                if(key2.length() < 1){
                    cout << "Invalid key" << endl;
                } else {
                    cout << "Successfully set encryption key2 to " << key2 << endl;
                    key2tf = false;
                }
            }
        }
        // asks for decryption method if choice is 3
        else if (choice == 3){
            choice = 0;
            methodtf = true;
            cout << "Please input 1-4 to decide encryption technique." << endl;
            cout << "1. Method1 only (shift by 1)" << endl;
            cout << "2. Method2 only (shift by first key)" << endl;
            cout << "3. Method3 only (shift by both keys)" << endl;
            cout << "4. Mix of Method1, Method2, Method3" << endl;
            while(methodtf){ 
                cin >> method;
                cin.clear();
                cin.ignore(100,'\n');       
                if(method != 1 && method != 2 && method != 3 && method != 4){
                    cout << "Invalid encryption choice" << endl;
                } else {
                    cout << "Successfully set encryption type to " << method << endl;
                    methodtf = false;
                }
            }
        }
        // if choice is 4, check if both keys and method are set
        else if (choice == 4){
            choice = 0;
            if((method == 1 || method == 2 || method == 3 || method == 4) && key1 != " " && key2 != " "){
                cout << "Enter your message to encrypt:" << endl;
                getline(cin, message);
                string computed_message = encryptMessage(message, method, key1, key2);
                cout << computed_message << endl;
            } else {
                cout << "You cannot do this until you set both keys and choose an encryption method" << endl;
            }
        }
        // if choice is 5, check if both keys and method are set
        else if (choice == 5){
            choice = 0;
            if((method == 1 || method == 2 || method == 3 || method == 4) && key1 != " " && key2 != " "){
                cout << "Enter your message to decrypt:" << endl;
                getline(cin, message);
                string computed_message = decryptMessage(message, method, key1, key2);
                cout << computed_message << endl;
            } else {
                cout << "You cannot do this until you set both keys and choose an encryption method" << endl;
            }
        }
        // if choice is 6, exit the loop (update the loop condition)
        else if (choice == 6){
            choice = 0;
            cout << "Goodbye." << endl;
            active = false;
        }
        // if none are the case, print invalid and repeat
        else {
            invalidtf = true;
            while(invalidtf){
                cout << "Invalid input" << endl;
                cin >> choice;
                cin.clear();
                cin.ignore(100,'\n');
                if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6){
                    invalidtf = false;
                } 
            }
        }
    }

    








    // // part 1
    // assert(shiftChar('a', 1) == 'b');
    // assert(shiftChar('a', -1) == 'z');
    // assert(shiftChar('x', 4) == 'b');
    // assert(shiftChar('h', 17) == 'y');

    // // initializes variables
    // char c;
    // int shift = 0;

    // // asks for initial letter to encrypt
    // cout << "Enter a letter to encrypt:" << endl;
    // cin >> c;
    // if(!(c >= 97 && c <= 122)){
    //     cout << "Invalid input" << endl;
    //     return 1;
    // }

    // // asks for the shift value
    // cout << "Enter an integer to shift the letter by:" << endl;
    // cin >> shift;

    // // calls the shiftChar function and returns a char
    // char shiftc = shiftChar(c, shift);

    // // prints shifted value
    // cout << "The encrypted letter is: '" << shiftc << "'" << endl;

    // cin.ignore(200,'\n');  



    // // part 2
    // // initializes variables
    // string key1;

    // // asks for the encription key
    // cout << "Enter key 1:" << endl;
    // getline(cin,key1);

    // // calls function to compute shift
    // int computed_shift = getMethod2ShiftAmount(key1);

    // // prints computed shift
    // cout << "The Method 2 Shift Value is: " << computed_shift << endl;


    // // part 3
    // // initializes variables
    // string key1, key2;

    // // asks user for keys
    // cout << "Enter key 1:" << endl;
    // getline(cin, key1);
    // cout << "Enter key 2:" << endl;
    // getline(cin, key2);

    // // calls function to compute shift
    // int computed_shift = getMethod3ShiftAmount(key1, key2);

    // // prints computed shift
    // cout << "The Method 3 Shift Value is: " << computed_shift << endl;


    // // part 4
    // // initializes variables
    // string key1, key2;
    // char c;
    // int method = 0;

    // // asks user for char
    // cout << "Enter a letter to encrypt:" << endl;
    // cin >> c;

    // // clean cin statement to transition to getline
    // cin.ignore(200,'\n'); 

    // //asks user for keys
    // cout << "Enter key 1:" << endl;
    // getline(cin, key1);
    // cout << "Enter key 2:" << endl;
    // getline(cin, key2);

    // // asks for encryption method
    // cout << "Select the Ecryption Method to Use:" << endl;
    // cout << "Method 1: Shift Right by 1." << endl;
    // cout << "Method 2: Shift Right by Key Formula." << endl;
    // cout << "Method 3: Shift Right by Mixed Key Formula." << endl;
    // cin >> method;

    // // call encryptChar
    // char encrypted_letter = encryptChar(c, method, key1, key2);

    // // output encrypted letter
    // cout << "The encrypted letter is: " << encrypted_letter << endl;


    // // part 5
    // // initializes variables
    // string key1, key2;
    // char c;
    // int method = 0;

    // // asks user for char
    // cout << "Enter a letter to decrypt:" << endl;
    // cin >> c;

    // // clean cin statement to transition to getline
    // cin.ignore(200,'\n'); 

    // //asks user for keys
    // cout << "Enter key 1:" << endl;
    // getline(cin, key1);
    // cout << "Enter key 2:" << endl;
    // getline(cin, key2);

    // // asks for decryption method
    // cout << "Select the Ecryption Method to Use:" << endl;
    // cout << "Method 1: Shift Right by 1." << endl;
    // cout << "Method 2: Shift Right by Key Formula." << endl;
    // cout << "Method 3: Shift Right by Mixed Key Formula." << endl;
    // cin >> method;

    // // call decryptChar
    // char encrypted_letter = decryptChar(c, method, key1, key2);

    // // output decrypted letter
    // cout << "The decrypted letter is: " << encrypted_letter << endl;



    // // part 6
    // // initializes variables
    // string key1, key2, message;
    // int method = 0;

    // // asks user for char
    // cout << "Enter a message to encrypt:" << endl;
    // getline(cin, message);

    // //asks user for keys
    // cout << "Enter key 1:" << endl;
    // getline(cin, key1);
    // cout << "Enter key 2:" << endl;
    // getline(cin, key2);

    // // asks for decryption method
    // cout << "Select the Ecryption Method to Use:" << endl;
    // cout << "Method 1: Shift Right by 1." << endl;
    // cout << "Method 2: Shift Right by Key Formula." << endl;
    // cout << "Method 3: Shift Right by Mixed Key Formula." << endl;
    // cout << "Method 4: Combination of methods 1, 2, and 3." << endl;
    // cin >> method;

    // // call encryptMessage
    // string encrypted_message = encryptMessage(message, method, key1, key2);

    // // output encryped message
    // cout << "The encrypted message is: " << encrypted_message << endl;

    // // part 7
    // // initializes variables
    // string key1, key2, message;
    // int method = 0;

    // // asks user for message to decrypt
    // cout << "Enter a message to decrypt:" << endl;
    // getline(cin, message);

    // //asks user for keys
    // cout << "Enter key 1:" << endl;
    // getline(cin, key1);
    // cout << "Enter key 2:" << endl;
    // getline(cin, key2);

    // // asks for decryption method
    // cout << "Select the Decryption Method to Use:" << endl;
    // cout << "Method 1: Shift Right by 1." << endl;
    // cout << "Method 2: Shift Right by Key Formula." << endl;
    // cout << "Method 3: Shift Right by Mixed Key Formula." << endl;
    // cout << "Method 4: Combination of methods 1, 2, and 3." << endl;
    // cin >> method;

    // // call decryptMessage
    // string decrypted_message = decryptMessage(message, method, key1, key2);

    // // output encryped message
    // cout << "The decrypted message is: " << decrypted_message << endl;

    return 0;
}