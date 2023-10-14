#include<iostream> 
using namespace std;
int main(){
    
    string day;
    int value = 0;

    cout << "What day is it? (Enter as: M,Tu,W,Th,F,Sa,Su) ";
    cin >> day;

    if (!(day == "M" || day == "Tu" || day == "W" || 
        day == "Th" || day == "F" || day == "Sa" || day == "Su")){
            cout << "Enter a valid input" << endl;
            return 0;
    } else {
        if (day == "M"){
            value = 1;
        } else if (day == "Tu"){
            value = 2;
        } else if (day == "W"){
            value = 3;
        } else if (day == "Th"){
            value = 4;
        } else if (day == "F"){
            value = 5;
        } else if (day == "Sa"){
            value = 6;
        } else {
             value = 7;
        }
    }

    switch(value){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }


    
    return 0;
}