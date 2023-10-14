#include<iostream> 

using namespace std;

int purchaseTruck(int budget, int selection);

int main(){
    
    int selection = 0, budget = 81350;
    cout << "These are the trucks available for purchase:" << endl;
    cout << "Truck model 1: Ford F-150. Price: $26,900" << endl;
    cout << "Truck model 2: Dodge RAM 1500. Price: $21,400" << endl;
    cout << "Truck model 3: Chevy Silverado. Price: $24,700" << endl;
    cout << "Truck model 4: Toyota Tundra. Price: $31,200" << endl;
    cout << "Truck model 5: GMC Sierra 1500. Price: $28,300" << endl;


    cout << "Please enter a number from 1 to 5:" << endl;
    cin >> selection;
    budget = purchaseTruck(budget, selection);
    
    cout << "Please enter a number from 1 to 5:" << endl;
    cin >> selection;
    budget = purchaseTruck(budget, selection);

    if(budget >= 31200){
        cout << "Please enter a number from 1 to 5:" << endl;
        cin >> selection;
        budget = purchaseTruck(budget, selection);
    }
    return 0;
}

int purchaseTruck(int budget, int selection){
    if(selection == 1){
        cout << "Congratulations! You have purchased a Ford F-150" << endl;
        return (budget - 26900);
    } else if (selection == 2){
        cout << "Congratulations! You have purchased a Dodge RAM 1500" << endl;
        return (budget - 21400);
    } else if (selection == 3){
        cout << "Congratulations! You have purchased a Chevy Silverado" << endl;
        return (budget - 24700);
    } else if (selection == 4){
        cout << "Congratulations! You have purchased a Toyota Tundra" << endl;
        return (budget - 31200);
    } else if (selection == 5){
        cout << "Congratulations! You have purchased a GMC Sierra 1500" << endl;
        return (budget - 28300);
    } else {
        cout << "Invalid input!" << endl;
        return budget;
    }
}