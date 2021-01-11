#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"find root of: ";
    cin>>n;
    int p;
    cout<<"enter the precision level: ";
    cin>>p;
    float root=0;
    float increase=1;

    for(int i=0;i<=p;i++){
        //finalise the correct digit for the current place
        while(root*root<=n){
            root=root+increase;
        }
        root=root-increase;
        increase=increase/10;
    }
    cout<<root<<endl;

    return 0;
}