#include<iostream>
using namespace std;

int main(){
    //decimal to binary 
    //eg. 9 --> binary value 1001

    int n;
    cin>>n;

    int rem;

    while(n!=0){
        rem= n%2;
        n=n/2;
        cout<<rem;
    }
    //lol ...this  cout 0 adds 0   add the  end
    // cout<<0<<endl;

    return 0;
}