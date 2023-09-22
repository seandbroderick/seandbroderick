#include<iostream> 
#include<string> // lots of built-in functions

using namespace std;

int main(){
    
    // string name;
    // cout << "Enter name: ";
    // // cin >> name; -> does not take spaces

    // // getline() -> takes two arguments (cin, string_variable)
    // getline(cin, name); // searching for new line \n
    // // *** do not use cin and getline() in the same program

    // cout << name << endl;

    string first_name = "Spongebob";
    string last_name = "Squarepants";
    // string space = " ";

    string full_name = first_name + " " + last_name;


    // length() -> returns the number of characters in the string
    
    //unsigned int can only take positive integers
    unsigned int len = full_name.length(); // no arguments in length() 
    // length(full_name); will not work

    cout << full_name << endl;

    cout << len << endl;
    

    // S  P  O  N  G  E  B  O  B     S  Q  U  A  R  E  P  A  N  T  S
    // 0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20

    // index value -> location of a character inside a string

    char letter = full_name[6];

    cout << letter << endl;


    // substr() -> HW4 & Project 1
    // extracts a portion of the given string

    // string_var1 = string_var.substr(starting_index, number_of_characters);
    string new_string = full_name.substr(0,6);
    cout << new_string << endl;

    string new_string2 = full_name.substr(10,6);
    cout << new_string2 << endl;

    // if the second argument is not given, it will give from the starting_index onwards
    // if no arguments are given, it will give the whole string, though this is pointless

    return 0;
}