#include<iostream> 

using namespace std;


double estimatePaintingTime(double area, char painter);

int main(){
    
    double area = 0;
    char painter;

    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> area;

    cout << "Select a painter (W, X, Y or Z)" << endl;
    cin >> painter;

    if (area <= 0 || !(painter == 'W' || painter == 'X' || painter == 'Y' || painter == 'Z')){
        cout << "Please enter a valid input" << endl;
        return 0;
    }

    double hours = estimatePaintingTime(area, painter);

    cout << "The time taken to paint all four walls by painter " << painter << ": " << hours << " hours" << endl;
    
    return 0;
}

double estimatePaintingTime(double area, char painter){
    double hours = 0;
    if (painter == 'W'){
        hours = 12 * area / 300;
    } else if (painter == 'X'){
        hours = 10 * area / 180;
    } else if (painter == 'Y'){
        hours = 5 * area / 120;
    } else {
       hours = 15 * area / 420;
    }
    return hours;
}