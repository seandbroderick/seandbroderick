#include<iostream> 
using namespace std;
int main(){
    
    double budget = 0;
    char seatType;

    cout << "What is your budget?" << endl;
    cin >> budget;

    cout << "Which of these seats would you like to take (G, B, P or O)?" << endl;
    cin >> seatType;

    if (budget < 0){
        cout << "Please enter valid input." << endl;
        return 0;
    }

    if (seatType != 'G' && seatType != 'B' && seatType != 'P' && seatType != 'O'){
        cout << "Please enter valid input." << endl;
        return 0;
    }


    if (seatType == 'G' && budget >= 1075.15) {
        cout << "Yes, this seat is within your budget!" << endl;
    } else if (seatType == 'B' && budget >= 1340.96) {
        cout << "Yes, this seat is within your budget!" << endl;
    } else if (seatType == 'P' && budget >= 1684.29) {
        cout << "Yes, this seat is within your budget!" << endl;
    } else if (seatType == 'O' && budget >= 1950.33) {
        cout << "Yes, this seat is within your budget!" << endl;
    } else {
        cout << "Sorry, this seat is outside your budget." << endl;
    }
    return 0;
}