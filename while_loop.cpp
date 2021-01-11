#include<iostream>
using namespace std;

int main(){
    //learning while loop
    int edge=10;
    int position=10;

    //while loop is a entry controlled loop 
    //ie the initial condition is checked before executing the loop


    while(position<edge){
        position=position+1;
        cout<<"take one step and reach position "<<position<<endl;
    }

    cout<<"Final position: "<<position<<endl;
    if(position<edge){
        cout<<"safe"<<endl;
    }
    else if(position==edge){
        cout<<"standing on edge"<<endl;
    }
    else{
        cout<<"fell off the edge"<<endl;
    }

    return 0;
}