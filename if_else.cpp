#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number to set if it is divisible by 2:"<<endl;
    cin>>n;

    /*
    Program to check if a number is divisible by 2,div by 3 and both
    */

    //if else-if else
    if(n%2==0){
        cout<<"number is even "<<endl;
        cout<<"if block"<<endl;
    }
    else{
        cout<<"number is not even"<<endl;
        cout<<"else block"<<endl;
    }
    

    return 0;
}