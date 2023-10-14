#include<iostream> 
using namespace std;
int main(){
    
    //program that checks if user input is a vowel or consonant

    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    
    //aeiou and y

    if((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u') ||
       (letter == 'A') || (letter == 'E') || (letter == 'I') || (letter == 'O') || (letter == 'U')){
        cout << letter << " is a vowel." << endl;
    } else if ((letter == 'y') || (letter == 'Y')){
        cout << letter << " is a vowel, but only some of the time." << endl;
    } else {
        cout << letter << " is not a vowel." << endl;
    }

    return 0;
}