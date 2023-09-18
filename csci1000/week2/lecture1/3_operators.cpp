#include<iostream>
using namespace std;

int main(){

    //relational operators ->   >, <, >=, <=, =, !=,


    //bool var = 1; // any nonzero value in the boolean will evaluate to true
    // cout << var << endl;

    //program to check what time class is over

    double time = 0;
    cout << "Enter what time it is: ";
    cin >> time;

    if(time >= 3.20){
        cout << "Class is over";
    } else if (time >= 2.30 && time < 3.20){
        cout << "Class is ongoing";
    } else {
        cout << "Class hasn't started yet";}


    // if statement/block

    //if (condition){
    //  outcome
    //}




    return 0;
}