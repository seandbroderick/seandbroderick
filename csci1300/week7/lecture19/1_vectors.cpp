#include<iostream> 
#include<vector>

using namespace std;

int main(){
    
    // char arr1[5] = {'a', 'e', 'i', 'o', 'u'};
    // cout << arr1[2] << endl;

    // vectors -> dynamically re-sizeable arrays
    // vector<data_type> vector_name;

    vector<int> vec1; // size 0
    vector<int> vec2 = {1, 2, 3, 4, 5}; // size 5
    vector<int> vec3(10); // size 10

    // can only store a singular data type - slight exception to characters w/ ascii table values

    // advantage 1 -> you do not need an extra variable to track size
    // size()

    cout << vec1.size() << endl;
    cout << vec2.size() << endl;
    cout << vec3.size() << endl;

    // how to add elements to vector
    // push_back(value) -> increases size if needed and adds the value to the vector

    vec1.push_back(6); // increases size by 1 and adds 6 at position 0 in vec1
    vec1.push_back(-10); // increases size by 1 and stores -10 at postition 1
    vec1.push_back(310);
    vec1.push_back(3);
    vec1.push_back(5);

    for(int i = 0; i < (int)vec1.size(); i++){
        cout << vec1.at(i) << endl;
        // cout << vec1[i] << endl; -> same thing but it prevents out of bounds errors
    }

    // remove an element
    // pop_back() -> removes the final element (last index)
    
    vec1.pop_back(); // removes 5
    
    for(int i = 0; i < (int)vec1.size(); i++){
        cout << vec1.at(i) << endl;
    }

    return 0;
}