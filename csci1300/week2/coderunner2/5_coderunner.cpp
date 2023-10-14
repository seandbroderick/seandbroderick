#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
    
    char carType;
    double days = 0;

    cout << "Which car type ( A, B, C, or D ) would you like to rent?" << endl;
    cin >> carType;

    cout << "How many days would you like to rent this car?" << endl;
    cin >> days;

    if (days < 0){
        cout << "Please enter valid input." << endl;
        return 0;
    }

    if (carType != 'A' && carType != 'B' && carType != 'C' && carType != 'D'){
        cout << "Please enter valid input." << endl;
        return 0;
    }


    if (carType == 'A') {
        cout << "Your bill total is $" << fixed << setprecision(2) << 1.09 * (100.00 + days * 15.00) << endl;
    } else if (carType == 'B') {
        cout << "Your bill total is $" << fixed << setprecision(2) << 1.09 * (150.00 + days * 20.00) << endl;
    } else if (carType == 'C') {
        cout << "Your bill total is $" << fixed << setprecision(2) << 1.09 * (200.00 + days * 25.00) << endl;
    } else if (carType == 'D') {
        cout << "Your bill total is $" << fixed << setprecision(2) << 1.09 * (250.00 + days * 30.00) << endl;
    }
    return 0;
}