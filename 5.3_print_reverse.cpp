#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    int rem;
    int sum=0;

    while(n!=0){
        rem=n%10;
        sum=sum*10 + rem;
        n=n/10;
    }
    cout<<sum;

    return 0;
}