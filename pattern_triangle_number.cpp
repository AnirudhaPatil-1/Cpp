#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    //loop for row from 1 to n
    for(int i=1;i<=n;i++){

        //loop for spaces
        for(int space=1; space<=n-i;space++){
            cout<<" ";
        }
        //loop for increasing number
        int value=i;
        int count;
        for( count=1;count<=i;count++){
            cout<<value;
            value=value+1;
            
        }
        //loop for decreasing number
        value=value-2;
        for( count=1;count<=i-1;count++){
            cout<<value;
            value=value-1;
        }

        cout<<endl;
    }

    return 0;
}