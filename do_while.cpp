#include<iostream>
using namespace std;

int main(){
    
    int edge=10;
    int position=10;

    //in do while the loop is executed and then at the exit the condition is checked 
    // do while is executed atleast once!
    //exit controlled loop like a do while loop does not 
    // check for  initial condition  it is true or false

    do{
        position=position+1;
        cout<<"taking one step and reaching position "<<position<<endl;
    }
    while(position<edge);

    cout<<"Final position: "<<position<<endl;

    if(position<edge){
        cout<<"standing before edge"<<endl;
    }
    else if(position==edge){
        cout<<"standing on edge"<<endl;
    }
    else{
        cout<<"falling off the edge"<<endl;
    }


    return 0;
}