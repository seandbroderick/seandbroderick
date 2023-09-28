#include<iostream>

using namespace std;

/**
 * brekfast menu
 * 1. cofee - 5.99
 * 2. cinnamon roll - 2.99
 * 3. fruit - 1.99
 * 4. exit
 * 
 * switch -> only inputs int and char; only does == comparisons
 * faster to use switch for == that if and else if statements
*/

int main (){
    int choice = 0;
    double budget = 6.50;

    while(budget > 1.99){

        cout << "===================MENU===================" << endl;
        cout << "1. Coffee............................$5.99" << endl;
        cout << "2. Cinnamon Roll.....................$2.99" << endl;
        cout << "3. Fruit.............................$1.99" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;
        
        switch(choice){
            case 1:
            {
                budget = budget - 5.99;
                cout << "You chose coffee. Your new budget is: $" << budget << endl;
                break;
            }
            case 2:
            {
                budget = budget - 2.99;
                cout << "You chose the cinnamon roll. Your new budget is: $" << budget << endl;
                break;
            }
            case 3:
            {
                budget = budget - 1.99;
                cout << "You chose the fruit. Your new budget is: $" << budget << endl;
                break;
            }
            case 4:
            {
                cout << "Goodbye" << endl;
                break;
            }
            default:
            {
                cout << "Error" << endl;
            }
        }
    }    

    return 0;
}