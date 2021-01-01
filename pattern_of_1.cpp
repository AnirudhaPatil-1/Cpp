#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int column=1;
        if(row%2!=0){
            //odd row
            while(column<=row){
                cout<<1;
                column=column+1;
            }
        }
        else{
            //even row
            cout<<1;
            while(column<=row-2){
                cout<<0;
                column=column+1;
            }
            cout<<1;

        } 
        cout<<endl;
        row=row+1;
    }
    return 0;

}