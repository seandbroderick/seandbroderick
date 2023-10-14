#include<iostream> 
using namespace std;

//program to preint a menu

int main(){
    
    char choice;

    cout << "======================TARGET MENU========================" << endl;
    cout << "a. School Supplies" << endl; //books, pencils, backpack
    cout << "b. Clothing" << endl;
    cout << "c. Electronics" << endl;
    cout << "d. Exit" << endl;
    
    cout << "Choose a category: " << endl;
    cin >> choice;

    if (choice == 'a'){

        char suppliesChoice;

        cout << "You chose school supplies" << endl;
        
        cout << "======================SCHOOL SUPPLIES MENU========================" << endl;
        cout << "a. Books" << endl; //books, pencils, backpack
        cout << "b. Pencils" << endl;
        cout << "c. Backpacks" << endl;
        cout << "d. Exit" << endl;

        cout << "Choose a product: " << endl;
        cin >> suppliesChoice;

        if (suppliesChoice == 'a'){
            cout << "You chose books" << endl;
        } else if (suppliesChoice == 'b'){
            cout << "You chose pencils" << endl;
        } else if (suppliesChoice == 'c'){
            cout << "You chose backpacks" << endl;
        } else if (suppliesChoice == 'd'){
            cout << "Goodbye!" << endl;
        } else { //any other case that is not a, b, c or d will result in an retry
            cout << "Retry!" << endl;
        }

    } else if (choice == 'b'){
        cout << "You chose clothing" << endl;
    } else if (choice == 'c'){
        cout << "You chose electronics" << endl;
    } else if (choice == 'd'){ //any other case that is not a, b or c will result in an exit
        cout << "Goodbye!" << endl;
    } else { //any other case that is not a, b, c or d will result in an retry
        cout << "Retry!" << endl;
    }
    


    return 0;
}