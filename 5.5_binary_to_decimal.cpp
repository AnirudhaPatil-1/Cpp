//binary to decimal

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    int power=1;
    int rem;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+ rem*power;
        power=power*2;
    }
    cout<<sum<<endl;

    return 0;
}