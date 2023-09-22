#include<iostream> 

using namespace std;



double calculateWallArea();

double calculatePaintCost();

double estimatePaintingTime();



int main(){

    int option = 0;
    
    cout << "Choose an option" << endl;
    cout << "1. Calculate Exterior Wall Area" << endl;
    cout << "2. Calculate Paint Cost" << endl;
    cout << "3. Estimate Painting Time" << endl;
    cout << "4. Exit" << endl;
    cin >> option;

    if (option == 1){
        calculateWallArea();
    } else if (option == 2){
        calculatePaintCost();
    } else if (option == 3){
        estimatePaintingTime();
    } else if (option == 4){
        cout << "Thank you!" << endl;
    } else {
        cout << "Please enter a valid input" << endl;
    }

    return 0;
}

double calculateWallArea(){
    
    double length = 0, width = 0;

    cout << "Enter length of the base of the house (in ft)" << endl;
    cin >> length;

    cout << "Enter width of the base of the house (in ft)" << endl;
    cin >> width;

    if (!(length > 0 && width > 0)){
        cout << "Please enter a valid input" << endl;
        return 0;
    }

    double wall_area = 20 * (length + width);

    cout << "The total area of all the four walls: " << wall_area << " sq ft" << endl;
    
    return 0;
}

double calculatePaintCost(){
    
    double area = 0;
    char grade;

    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> area;

    cout << "Select the paint grade (A, B, or C)" << endl;
    cin >> grade;

    if (area <= 0 || !(grade == 'A' || grade == 'B' || grade == 'C')){
        cout << "Please enter a valid input" << endl;
        return 0;
    }

    double cost = 0;

    if (grade == 'A'){
        cost = area * 0.75;
    } else if (grade == 'B'){
        cost = area * 1.25;
    } else {
        cost = area * 2.75;
    }

    cout << "The total cost to paint all four walls: $" << cost << endl;
    
    return 0;
}

double estimatePaintingTime(){
    
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

    cout << "The time taken to paint all four walls by painter " << painter << ": " << hours << " hours" << endl;
    
    return 0;
}
