#include<iostream>
using namespace std;

int main(){

    //program on sum of digits

    int n;
    cin>>n;

    //initialisation condition
    int rem;
    int sum=0;

    //stopping criteria
    while(n>0){
        rem=n%10;

        //update statement
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum<<endl;

    return 0;
}
