#include<iostream> 

using namespace std;

// loop control -> break and continue

int main(){
    
    for(int i = 0; i < 7; i++){
        if (i == 3){
            break; // terminates the loop
        }
        cout << i << endl;
    }

    for(int i = 0; i < 7; i++){
        if (i == 3){
            continue; // terminates the current iteration of the loop, continues onto the next loop
        }
        cout << i << endl;
    }
     
    return 0;
}
