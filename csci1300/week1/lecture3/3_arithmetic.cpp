
#include <iostream>

using namespace std;

int main(){
    // + - * /
    int x = 5, y = 10;
    int sum = 0;
    sum = x + y;
    cout << "Sum = " << sum << endl;

    //int div = x/y //integer divison if left as an int
    double div = (double) x / y; 

    cout << "Division = " << div << endl;


    int xx = 17, yy = 3;

    cout << xx / yy << endl;
    //divides no remainder

    cout << xx % yy << endl;
    //provides remainder


    double width = 0, height = 0, perimeter = 0;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter height of rectangle: ";
    cin >> height;

    perimeter = 2 * (width + height);
    cout << "Perimiter = " << perimeter << endl;



    return 0;
}