#include<iostream> 
#include<vector>

using namespace std;

void add10(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] += 10;
    }
}

vector<int> add10(vector<int> vec){
    for(int i = 0; i < (int)vec.size(); i++){
        vec.at(i) += 10;
    }
    return vec;
}

int main(){
    
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << "   ";
    }
    cout << endl;

    add10(arr, SIZE); // doesnt need return value because arrays have a global scope

    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << "   ";
    }
    cout << endl;

    // for vector

    vector<int> vec1 = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < (int)vec1.size(); i++){
        cout << vec1.at(i) << "   ";
    }
    cout << endl;

    vec1 = add10(vec1); // vectors pass by value, they are not global in scope like arrays

    for(int i = 0; i < (int)vec1.size(); i++){
        cout << vec1.at(i) << "   ";
    }
    cout << endl;

    return 0;
}