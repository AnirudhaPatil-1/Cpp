#include<iostream>
using namespace std;

int main(){
    long int n;
    //used long int so to store the 10 digit phone number and digits in it
    int digit;
    cin>>n>>digit;

    int rem, count;
    count=0;
    while(n!=0){
        rem=n%10;    
        if(digit==rem){
            count++;
        }
        n=n/10;
    }
    cout<<count<<endl;

    return 0;
}