#include<iostream> 
using namespace std;
int main(){
    
    int trafficflow = 0;

    cout << "What is the traffic flow rate on the highway?" << endl;
    cin >> trafficflow;

    if(trafficflow >= 800){
        cout << "You're gonna be late to the concert." << endl;
    } else if (trafficflow >= 0){
        cout << "You're gonna make it to the concert on time." << endl;
    } else {
        cout << "Invalid traffic flow rate." << endl;
    }
    
    return 0;
}