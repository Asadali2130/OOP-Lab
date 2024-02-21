#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Enter the name:";
    getline(cin,name);
    int a=name.length();
    for(int i=a-1;i>=0;i--){
        cout<<""<<name[i];
    }
    
}