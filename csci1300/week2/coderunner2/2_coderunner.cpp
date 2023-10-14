#include<iostream> 
#include<iomanip>
using namespace std;
int main(){
    double withdrawl = 0;
    double balance = 1000;

    cout << "Enter the amount to be withdrawn from your bank account:" << endl;
    cin >> withdrawl;
    
    if(withdrawl > 900){
        cout << "Transaction Failed!" << endl;
    } else if (withdrawl <= 0){
        cout << "Invalid input. Withdrawn amount must be a non-negative value." << endl;
    } else {    
        cout << "Transaction Successful! You're balance is $" << fixed << setprecision(2) << balance - withdrawl << endl;
    }

    return 0;
}