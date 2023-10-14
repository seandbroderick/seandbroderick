#include<iostream> 
using namespace std;


bool isVowel(char letter){
    if((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u') ||
       (letter == 'A') || (letter == 'E') || (letter == 'I') || (letter == 'O') || (letter == 'U')){
        return true;
    } else {
        return false;
    }
}


int main(){
    
    //program that checks if user input is a vowel or consonant

    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    
    /**
     * call isVowel function
     * check if function returns true than print letter is a vowel
     * if false print that letter is not a vowel
    */
   
    bool vcheck = isVowel(letter);
    if(vcheck){
        cout << letter << " is a vowel." << endl;
    } else {
        cout << letter << " is not a vowel." << endl;
    }
    return 0;
}