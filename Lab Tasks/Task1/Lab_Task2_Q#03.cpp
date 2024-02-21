#include <iostream>
using namespace std;
int main() {
    
    // Nested loops to print the rectangle pattern
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
           if(i==1 ||i==4 || j==1 || j==4){
            cout<<"*";
           }
           else {
            cout<<" ";
           }
        }
        cout<<"\n";
    }
}


