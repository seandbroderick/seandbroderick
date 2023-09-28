#include<iostream> 
#include<iomanip> 

using namespace std;

void calculateAndDisplayDiet(int days, double cals);

int main(){

    int days = 0;
    double cals = 0;

    cout << "What day is it today? Enter a number from 0 to 6:" << endl;
    cin >> days;
    if(!(days == 0 || days == 1 || days == 2 || days == 3 || days == 4 || days == 5 || days == 6)){
        cout << "Invalid input!" << endl;
        return 1;
    }
    cout << "How much was Ralphie fed yesterday? Enter an amount in MCals:" << endl;
    cin >> cals;
    if(cals < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }

    calculateAndDisplayDiet(days, cals);

    return 0;
}

void calculateAndDisplayDiet(int days, double cals){
    double minimum_cals = 12.5;
    if(days == 2 || days == 5 || days == 6){
        minimum_cals = 16.5;
    }
    if (cals + minimum_cals > 35){
        cout << "Ralphie was fed too much yesterday!";
    } else {
        cout << "Ralphie should be fed at least " << fixed << setprecision(2) << minimum_cals << " and at most " << 35 - cals << " MCals of food today.";
    }
}