#include<iostream> 

using namespace std;

// program to print the first 50 numbers, odds only
void printOdds();

int main(){
    // 1. define and initialize the loop variable -> i, j, k
    // 2. condition -> executes and terminates
    // 3. update the loop variable to terminate your loop
    // 4. execute code
    printOdds();
    return 0;
}

void printOdds(){
    int i = 0;
    while(i < 50){
        i++;  // same as i = i + 1; i += 1;
                // doesn't need to always increment by one, increments are based on the problem at hand
        if(i % 2 == 1){
            cout << "i: " << i << endl;
        }
    }    
}