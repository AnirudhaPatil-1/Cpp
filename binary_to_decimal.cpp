#include<iostream>
using namespace std;


// Trying to solve
//no correct  solution yet

int main(){

    int n;
    cin>>n;
    cout<<endl;

    int rem;
    int sum=0;
    int p=0;
    int total=0;

    while(n!=0){
        rem=n%2;
        sum=pow(2.0,p)*rem;
        total=total+sum;
        n=n/10;
    }


    return 0;
}