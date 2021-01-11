#include<iostream>
#include<climits>
using namespace std;

int main(){
    /*data type modifiers:
    short
    long 
    signed
    unsigned
    */
    int x;
    int x1;
    cout<<sizeof(x)<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    x=INT_MAX;
    cout<<"the max value of x:"<<x<<endl;
    // THE WRAP AROUND CONCEPT
    x=x+2;
    cout<<"The value after adding 1 to max value of x:"<<x<<endl;
    


    return 0;
}