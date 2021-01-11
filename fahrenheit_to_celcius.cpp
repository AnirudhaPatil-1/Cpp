#include<iostream>
using namespace std;

int main(){

    int f=0;
    int c;
    cout<<"Fahrenheit --> Degree Celsius "<<endl;

    while(f<=300){
        /* mistakes:
        c=(5/9)*(f-32);
        this will give answer 0 as 5/9 for integer is 0
        solution :
        1) c=(5/9.0)*(f-32);
        2) c= (5*(f-32))/9; 
        */      
        c=(5/9.0)*(f-32);
        cout<<f<<" --> "<<c<<endl;
        f=f+20;
    }

    return 0;
}