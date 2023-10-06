#include<iostream> 

using namespace std;

int main(){

    int arr1[3] = {1, 2, 3};
    int arr2[3] = {0, 0, 0};

    // arr2 = arr1 -> will not work, too many elements

    cout << "Before copy: " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr2[i] << endl;
    }

    for(int i = 0; i < 3; i++){
        arr2[i] = arr1[i];
    }

    cout << "After copy: " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr2[i] << endl;
    }

    return 0;
}