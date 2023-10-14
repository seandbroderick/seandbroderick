#include<iostream> 
#include<vector>

using namespace std;

int main(){
    
    vector<int> vec1 = {1, 2, 3};

    vector<vector<int>> vec2 = {{1, 2, 3}, // row 1 has size 3
                                {1}, // row 2 has size 1
                                {1, 2, 3, 4, 5, 6}, // row 3 has size 6
                                vec1 // row 4 has the size from above (vec1) -> copys values, does not link them
                                };

    vec1.push_back(1); // -> only changes vec1, not the 4th row of vec2

    cout << vec2.size() << endl; // size is the number of rows, or the number of vectors the vector contains

    int rows = vec2.size();
    for(int i = 0; i < rows; i++){
        int columns = vec2.at(i).size();
        for(int j = 0; j < columns; j++){
            cout << vec2.at(i).at(j) << "       ";
        }
        cout << endl;
    }

    return 0;
}