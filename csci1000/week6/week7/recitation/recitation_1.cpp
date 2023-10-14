#include<iostream> 

using namespace std;

void swap(char letters[], int first_element, int second_element){
    char save = letters[first_element];
    letters[first_element] = letters[second_element];
    letters[second_element] = save;
}

void reverseArray(char letters[], int letters_length){
    for(int i = 0; i < 5; i++){
        swap(letters, i, letters_length-1-i);
    }
}

int main(){
    const int SIZE = 10;
    char letters[SIZE];
    cout << "Please enter ten characters for the array:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        cin >> letters[i];
    }

    reverseArray(letters, SIZE);

    cout << "The reversed array is:" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << letters[i] << " ";
    }



     
    return 0;
}
