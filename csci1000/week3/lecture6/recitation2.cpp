#include<iostream> 
using namespace std;
int main(){
    int ounces = 0, x = 0;
    cout << "How much water did you drink today?(in fl oz) " << endl;
    cin >> ounces;
    x = 64 - ounces;
    

    if (ounces < 0){
        cout << "Please enter a valid value!" << endl;
    } else if (ounces <= 32){
        cout << "You're very, very dehydrated! Get that water in! You have " << x << " fl oz left to drink." << endl;
    } else if (ounces <= 64){
        cout << "You're doing great, but you're still halfway to your goal! Get that water in! You have " << x << " fl oz left to drink." << endl;  
    } else {
        cout << "You've hit your goal for the day! Great job getting hydrated!" << endl;  
    }

    return 0;
}