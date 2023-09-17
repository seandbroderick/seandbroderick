#include<iostream> 
using namespace std;

int isValid(int input){
    if (input <= 0){
        return -1;
    } else {
        return 1;
    }
}


int main(){
    
    int number = 0;
    cout << "Enter a postive number: " << endl;
    cin >> number;

    int valid = isValid(number);

    if (valid == 1){
        //code for a positive number
        cout << "Valid input!" << endl;
    } else {
        cout << "Enter a valid input!" << endl;
        return 1;
    }
    
    return 0;
}