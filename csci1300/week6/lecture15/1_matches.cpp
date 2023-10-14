#include<iostream> 

using namespace std;

// program to count character matches in a given string
// string s = "csci1300";
// c -> 2

int main(){
    
    string s = "csci1300";
    // c s c i 1 3 0 0 
    // 0 1 2 3 4 5 6 7

    // print i through the string s
    // [] -> access indivgual letters in a string
    cout << s[3] << endl;
    
    // if accessed within a loop -> string_var[loop variable]
    
    // count number of c's inside the string s
    // looping for string traversal -> for loop
    // 0 through length - 1
    // length of s -> 8 letters
    int len = s.length();
    int count = 0;
    
    //      1       2       3
    for(int i = 0; i < len; i++){
        if(s[i] == 'c'){
            count++;
        }
    }
    // 1st iteration -> 1, 2, loop body, 3
    // 2nd iteration -> 2, loop body, 3
    // 3rd iteration -> 2, loop body, 3



    cout << "C's: " << count << endl;

    return 0;
}
