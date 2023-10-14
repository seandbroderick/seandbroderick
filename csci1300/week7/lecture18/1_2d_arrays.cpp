#include<iostream>
#include<iomanip> // setw();

using namespace std;

// 2d arrays must have column filled in for the parameter
void print2dArray(int arr[][4], int rows, int cols){ // adding rows and cols allows you to have more control over how much is printed by this function
    for(int i = 0; i < rows; i++){ // outer loop is rows
        for(int j = 0; j < cols; j++){ // inner loop is columns
            cout << setw(7) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
} 

int main(){
    // const int SIZE = 3; 
    // int arr_row1[SIZE] = {2, 3, 9}; // 1d array
    // int arr_row2[SIZE] = {2, 3, 9};

    // cout << arr_row1 << endl; // prints "0x7ffe..." -> address in memory, this is what we send to functions so they may reference this array
    // cout << arr_row1[2] << endl;

    // 2d array -> multiple rows and columns
    // data_type arr_name[rows][columns]
    
    const int ROW = 3;
    const int COL = 4;
    double sales[ROW][COL]; // declares a 2d array

    for(int i = 0; i < ROW; i++){ // outer loop is rows
        for(int j = 0; j < COL; j++){ // inner loop is columns
            cout << setw(15) << sales[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // internally a 2d array is made up of multiple 1d arrays
    int arr2[ROW][COL] = {  {2, 3, 4, 5},       // row 0
                            {20, 51, 15, -1},   // row 1
                            {-5, 3}};           // row 2

    // int arr2[ROW][COL] = { } // initializes all values to 0

    print2dArray(arr2, ROW, COL);

    for(int i = 0; i < ROW; i++){ // outer loop is rows
        for(int j = 0; j < COL; j++){ // inner loop is columns
            cout << setw(15) << arr2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}