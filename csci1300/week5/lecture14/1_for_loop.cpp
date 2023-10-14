#include<iostream> 

using namespace std;

// while loop -> very versitle loop, can be used for almost every problem
// do not break or return in this loop -> use the condition instead
// event controlled loop -> update is not just +1 or -1;

/**
 * for loop -> specifically count controlled loops, cannot do event controls
 * 
 * for(loop variable initialization; condition; update loop variable){
 *      statement
 * } 
 * 
 * initialize condition
 * while(condition){
 *      statment
 *      update loop variable
 * }
*/

int main(){
    
    for(int i = 1; i<=50; i++){
        cout << "i: " << i << endl;
        // update to 'i' happens here
        // checks if 'i' condition is valid
    }
     
    return 0;
}
