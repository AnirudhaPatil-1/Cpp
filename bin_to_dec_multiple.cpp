#include<iostream>
using namespace std;

int main(){

    // MULTIPLE INPUT OUTPUT PROGRAM
    int n;
    cin>>n;

    int no;
    while(n>0){
        cin>>no;
        
        // BINARY TO DECiMAL PROGRAM
        int sum=0;
        int b=1;
        int rem;

        while(no>0){
            rem=no%10;
            sum=sum+rem*b;
            // updating criteria
            no=no/10;
            b=b*2;
        }
        cout<<sum<<endl;

        n=n-1;
    }

    return 0;
}