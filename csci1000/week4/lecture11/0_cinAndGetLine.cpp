#include<iostream> 

using namespace std;


int main(){
    
    string name;
    cout << "Enter name: ";
    cin >> name; // leaves the \n in the process, getline then sees the \n in the process and inputs nothing.
    cout << name << endl;

    cin.ignore(1000, '\n'); // removes the \n from the process, making cin and getline work together

    cout << "Enter name: ";
    getline(cin, name); 
    cout << name << endl;
     
    return 0;
}
