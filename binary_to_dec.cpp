#include<iostream>
using namespace std;

int main(){
    // initialising condition
    int n;
    cin>>n;
    
    // initial condition
    int sum=0;
    int rem;
    int b=1;
    //stopping criteria
    while(n>0){
        // work
        rem=n%10;
        sum=sum+rem*b;
        // updating criteria
        n=n/10;
        b=b*2;
    }
    cout<<sum<<endl;


    return 0;
}