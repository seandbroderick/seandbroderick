#include<iostream> 
#include<iomanip> // input output manipulators

using namespace std;

//program to format output

int main(){

    cout << fixed << setprecision(2); 
    // in it's own cout statement as 
    // the first so it may apply to all future cout statements

    
    double score = 23;
    cout << score << endl;


    //area of a circle -> 2*pi*r*r 
    //double pi = 3.14;
    //pi = 56;
    // const -> constant -> cannot change

    const double MIN_SCORE = 67;
    
    //constants are to be indicated by all capital letters as to not be confused with other values
    //will not work -> prevents you from changing static values
    //MIN_SCORE = 80;

    
    return 0;
}