#include<iostream> 
#include<iomanip> 
#include<math.h>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2, int distance_type);

int main(){

    int distance_type = 0;
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    
    cout << "Enter distance type:" << endl;
    cin >> distance_type;
    if (!(distance_type == 1 || distance_type == 2)){
        cout << "Invalid distance type!" << endl;
        return 1;
    }

    cout << "Enter x1:" << endl;
    cin >> x1;

    cout << "Enter y1:" << endl;
    cin >> y1;

    cout << "Enter x2:" << endl;
    cin >> x2;

    cout << "Enter y2:" << endl;
    cin >> y2;
    
    double distance = calculateDistance(x1,y1,x2,y2,distance_type);

    cout << "The distance between the points is: " << fixed << setprecision(3) << distance;

    return 0;
}

double calculateDistance(double x1, double y1, double x2, double y2, int distance_type){
    double result = 0;
    if (distance_type == 1){
        result = fabs(x2-x1) + fabs(y2-y1);
    } else {
        result = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    }
    return result;
}