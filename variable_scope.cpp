#include<iostream>
using namespace std;

//scope = defined for variable (accessible --> lifetime and visibility)
//local scope
//global scope

int i = 200;


int main(){

    cout<<"global i: "<<i<<endl;

    int i=20;
    cout<<"local  i : "<<i<<endl;

    for(int i=2;i<=8;i++){
        cout<<"for loop i: "<<i<<endl;
    }
    cout<<"final i: "<<i<<endl;

    return 0;
}