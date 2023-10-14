#include<iostream> 
using namespace std;
int main(){
    
    int tempature = 0;
    int windSpeed = 0;

    cout << "What is tomorrow's temperature looking like?" << endl;
    cin >> tempature;

    cout << "What is tomorrow's wind speed looking like?" << endl;
    cin >> windSpeed;

    if(tempature >= 20 && tempature <= 30 && windSpeed <= 50 && windSpeed >=0){
        cout << "The weather conditions are ideal for skiing tomorrow." << endl;
    } else if (tempature < 0 || windSpeed < 0){
        cout << "Please enter valid input." << endl;
    } else {
        cout << "The weather conditions are not ideal for skiing tomorrow." << endl;
    }
    
    return 0;
}