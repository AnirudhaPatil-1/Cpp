#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number to check if it is prime: ";
    cin>>n;


    int i;
    /*for the for loop either i can use 
    1)for(i=2;i<=n-1;i++) 
    or
    2) for (i=2;i<n;i++) 
    */

    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"the number: "<<n<<" is not prime"<<endl;
            break;
        }
    }
    //remember this check is important
    if(i==n){
        cout<<"number is prime"<<endl;
    }
    return 0;
}