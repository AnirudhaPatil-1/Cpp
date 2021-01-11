#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int no;
    int min_so_far=INT_MAX;
    int max_so_far=INT_MIN;
    
//this problem can be solved using while loop or for loop
    while(n>0){
        cin>>no;
        cout<<"you entered number: "<<no<<endl;
        n=n-1;

        if(no<min_so_far){
        min_so_far=no;
    }
    if(no>max_so_far){
        max_so_far=no;
    }   
    }
    cout<<"the min_so_far is: "<<min_so_far<<endl;
    cout<<"the max_so_far is: "<<max_so_far<<endl;
    

    return 0;
}

