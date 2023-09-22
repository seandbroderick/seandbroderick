#include<iostream> 

using namespace std;


double calculateWallArea(double length, double width);

int main(){
    
    double length = 0, width = 0;

    cout << "Enter length of the base of the house (in ft)" << endl;
    cin >> length;

    cout << "Enter width of the base of the house (in ft)" << endl;
    cin >> width;

    if (!(length > 0 && width > 0)){
        cout << "Please enter a valid input" << endl;
        return 0;
    }

    double wall_area = calculateWallArea(length, width);

    cout << "The total area of all the four walls: " << wall_area << " sq ft" << endl;
    
    return 0;
}

double calculateWallArea(double length, double width){
    double wall_area = 20 * (length + width);
    return wall_area;
}