#include<iostream>
using namespace std;

int main(){

    //Problem - Unique number 2N+1
    //Given a list of numbers where every number occurs twice 
    //except one number

    int n;
    cout<<"enter quantity of numbers: ";
    cin>>n;

    int no;
    int ans=0;

    // Bitwise XOR operator to solve,
    //Helped to not store any number

    for(int i=0;i<n;i++){
        cout<<"enter number to evaluate: ";
        cin>>no;
        ans=ans^no;
    }
    cout<<"the unique no is: " <<ans<<endl;

    return 0;
}