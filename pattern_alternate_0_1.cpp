#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    //loop for column printing
    for(int i=1;i<=n;i++){
    int value=i%2!=0?0:1;

    //print i values in the ith line
        for(int count=1;count<=i;count++){
            
            cout<<value;
            value=1-value; // value=1, value=0, value =1,...
        }
        cout<<endl;
    }
    

    return 0;
}