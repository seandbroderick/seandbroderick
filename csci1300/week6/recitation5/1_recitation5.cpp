#include<iostream> 

using namespace std;

int expenseTracker();

int main(){
    
    int total = expenseTracker();
    cout << "Total Expenses for the Day: $" << total << endl;
     
    return 0;
}

int expenseTracker(){
    string category;
    int groceries = 0, entertainment = 0, education = 0, expense = 0;
    
    do{
        cout << "Enter a category (Groceries, Entertainment, Education or 'exit'): " << endl;
        cin >> category;
        if(category != "Groceries" && category != "Entertainment" && category != "Education" && category != "exit"){
            cout << "Invalid category. Please enther a valid category." << endl;
            continue;
        } else if (category == "exit"){
            cout << "Category-wise Expenses:" << endl;
            cout << "Groceries: $" << groceries << endl;
            cout << "Entertainment: $" << entertainment << endl;
            cout << "Education: $" << education << endl;
            continue;
        }
        cout << "Enter the expense amount: " << endl;
        cin >> expense;
        if(expense <= 0){
            cout << "Invalid expense. Please enther a valid expense." << endl;
            continue;
        }

        if (category == "Groceries"){
            groceries += expense;
        } else if (category == "Entertainment"){
            entertainment += expense;
        } else if (category == "Education"){
            education += expense;
        } else {
        }
    } while (category != "exit");
    return groceries + entertainment + education;
}