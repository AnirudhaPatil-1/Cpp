//MY OWN SOLUTION

#include<iostream>
using namespace std;

int main(){
    int n;
    
    for( int i=0;i<4;i++){}
    //only allow 4 digits as the number plate has 4 digits
    cout<<"input 4 digits of number plate"<<endl;
    cin>>n;
    int rem;
    int sum=0;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    cout<<"sum is: "<<sum<<endl;
    if(sum%2==0 and sum%4==0 ){
        cout<<" YES as even and  divisible by 4"<<endl;
    }
    else if(sum%2!=0 and sum%3==0){
        cout<<"Yes as odd and divisible by 3"<<endl;
    }
    else{
        cout<<"NO the vehicle not allowed to drive  today"<<endl;
    }

    return 0;
}