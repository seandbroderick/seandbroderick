#include<iostream> 

using namespace std;

// program to compute sum of numbers(given by user)
// type 0 to stop entering input

int main(){
    
    int num = 1;
    int sum = 0;

    // condition is dependant on user input
    while(num != 0){
        cout << "Enter number: " << endl;
        cin >> num;

        sum+=num; // sum = sum + num
    }
    
    cout << "Sum: " << sum << endl;

    // do loop -> least popular loop
    // do while loop -> scenario with your loop executing at least once
    // menu

    do{ // runs once before checking the boolean of the while statement
        cout << "Enter number: " << endl;
        cin >> num;
        sum+=num;
    } while (num != 0);
    
    cout << "Sum: " << sum << endl;
     
    return 0;
}