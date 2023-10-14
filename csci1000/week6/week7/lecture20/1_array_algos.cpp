#include<iostream> 

using namespace std;
// for loops and array indexing

// function to find the index of element that it is looking for
// 1. loop / look at elvery element
//      2. if element is desired value
//          3. print "found"

int arrSearch(int arr[], int current_size, const int MAX_SIZE, int element){
    bool flag = false;
    int position = -1; // if the program returns -1, we have not found the desired element
    for(int i = 0; i < current_size && !flag; i++){
        if(arr[i] == element){
            position = i;
            // break; -> okay, but use flag instead
            flag = true;
        }
    }
    return position;
}

int removeElementInArr(int arr[], int current_size, const int MAX_SIZE, int element){
    
    // finds index of element to be removed
    int position = arrSearch(arr, current_size, MAX_SIZE, element);
    
    // checks if position is within the valid range of index values (-1 doesn't work)
    if(position >= 0 && position < current_size){
        for(int i = position; i < current_size - 1; i++){ // if position = 3, current size = 7
            arr[i] = arr[i + 1];
        }
        current_size--;
    }
    return current_size;
}


int main(){
    
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = {12, 2, 9, 13, 26, 10, 31};
    //            0  1  2   3   4   5   6
    int current_size = 7;
    
    int index = arrSearch(arr, current_size, MAX_SIZE, 13);

    cout << index << endl;


    // remove an index from an array

    current_size = removeElementInArr(arr, current_size, MAX_SIZE, 13);

    for(int i = 0; i < current_size; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
