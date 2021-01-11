#include<iostream>
using namespace std;

int main(){
    
    //Break - that is used to stop a loop based upon certain condition

    //Problem statement - Read a stream of numbers until you get a multiple of 7

int no;

    while(true){
        //no stopping condition 
        cin>>no;

        if(no%9==0){
            //stop progessing more numbers
            break;
            // break - //take you out to line number 21
            //i.e it breaks you out of the loops
            //here in this programme you get out of the if loop and while loop
        }
        cout<<"number entered is: "<<no<<endl;
    }
    cout<<"loop ended as: "<<no<<" is multiple of 9"<<endl;

    return 0;
}