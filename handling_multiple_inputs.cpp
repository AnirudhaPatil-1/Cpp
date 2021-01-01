#include<iostream>
using namespace std;
int main(){


int n;
cin>>n;
int no;
//here n is like number of inputs it will take 
//and no is asking individual inputs
while(n>0){
    cin>>no;
    cout<<no*no;
    cout<<endl;
    n=n-1;
    
}

return 0;
}
