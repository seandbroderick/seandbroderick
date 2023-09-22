#include<iostream> 

using namespace std;


double calculatePaintCost(double area, char grade);

int main(){
    
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

    double cost = calculatePaintCost(area, grade);

    cout << "The total cost to paint all four walls: $" << cost << endl;
    
    return 0;
}

double calculatePaintCost(double area, char grade){
    double cost = 0;
    if (grade == 'A'){
        cost = area * 0.75;
    } else if (grade == 'B'){
        cost = area * 1.25;
    } else {
        cost = area * 2.75;
    }
    return cost;
}