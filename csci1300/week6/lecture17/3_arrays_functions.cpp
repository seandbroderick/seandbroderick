#include<iostream> 

using namespace std;

// function with an array parameter will always have 2 parameters (arrays have a global scope while they aren't defined globally)
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

// functions can have the same name if the parameters are of different datatypes or the number of parameters are different

void printArray(double arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

// these arrays are passed by refrence, meaning any changes here will be reflected in main
void convertToPounds(double kg[], double pounds[], int size){
    for(int j = 0; j < size; j++){
        pounds[j] = kg[j] * 2.205;
    }
}

int main(){
    
    // int arr1[3] = {2, 3, 4};
    // int arr2[10] = {2, 4, 5, 6};
    // double arr3[4] = {2.0, 2.1, 5.7};
    // printArray(arr1, 3);
    // printArray(arr2, 10);
    // printArray(arr3, 3);

    const int SIZE = 3;
    double kg[SIZE] = {2.3, 4.5, 7};
    double pounds[SIZE] = {};

    convertToPounds(kg, pounds, SIZE);
    printArray(pounds, SIZE);

    return 0;
}