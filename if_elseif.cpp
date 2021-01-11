#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number:"<<endl;
    cin>>n;

    if(n%2==0 and n%3==0){
        cout<<"number is divisible by both 2 and 3"<<endl;
        cout<<"if block"<<endl;
    }
    else if(n%2==0){
        cout<<"number is only divisible by 2"<<endl;
        cout<<"else if block-1"<<endl;
    }
    else if(n%3==0){
        cout<<"number is only divisible by 3"<<endl;
        cout<<"else if block- 2"<<endl;
    }
    else{
        cout<<"number is not divisible by 2 and 3"<<endl;
        cout<<"else block"<<endl;
    }

    return 0;
}