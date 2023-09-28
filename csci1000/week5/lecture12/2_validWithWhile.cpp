#include<iostream> 

using namespace std;


int main(){
    
    int number = 0;
    cout << "Enter number: ";
    cin >> number;
    
    // loop -> repeadtedly execute a statement or series of statements until a condition is met
    // while loop -> versatile loop, can be used in the majority of problems and solutions

    // while(condition){
        // code here
        // executes many times depending on the condition
        // executes as long as the condition is true
    // }

    while(number <= 0){
        cout << "Please enter a valid input: " << endl;
        // prompt for change of condition inside while loop
        cin >> number;
        

        //common cause of infinate loops -> the condition must update or be changed in the while statement
    }

    cout << "Valid input!" << endl;
    
     
    return 0;
}
