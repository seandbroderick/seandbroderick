#include<iostream> 

using namespace std;

int manageFeeder(int days, int feeder);

int main(){
    int feeder_1 = 0, feeder_2 = 0, feeder_3 = 0;

    cout << "How many days ago was feeder 1 filled?" << endl;
    cin >> feeder_1;
    if(feeder_1 < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }
    int feeder_1_days = manageFeeder(feeder_1, 1);
    if (feeder_1_days < 0){
        feeder_1_days = 0;
    }

    cout << "How many days ago was feeder 2 filled?" << endl;
    cin >> feeder_2;
    if(feeder_2 < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }
    int feeder_2_days = manageFeeder(feeder_2, 2);
    if (feeder_2_days < 0){
        feeder_2_days = 0;
    }

    cout << "How many days ago was feeder 3 filled?" << endl;
    cin >> feeder_3;
    if(feeder_3 < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }
    int feeder_3_days = manageFeeder(feeder_3, 3);
    if (feeder_3_days < 0){
        feeder_3_days = 0;
    }

    cout << "Feeder 1 will need to be filled in " << feeder_1_days << " days, feeder 2 will need to be filled in " << feeder_2_days << " days, and feeder 3 will need to be filled in " << feeder_3_days << " days." << endl;
     
    return 0;
}

int manageFeeder(int days, int feeder){
    
    if(feeder == 1){
        return ((21 - 3 * days)/3);
    } else if (feeder == 2){
        return ((37 - 2 * days)/2);
    } else {
        return ((17 - 4 * days)/4);
    }
}