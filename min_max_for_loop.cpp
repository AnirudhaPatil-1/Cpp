#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int min=INT_MAX;
    int max=INT_MIN;

    int no;
//done without storing all the numbers. Based on the current number we are reading.
    for(int i=0; i<n;i++){
        cin>>no;
        if(no<min){
            min=no;
        }
        if(no>max){
            max=no;
        }
    }

    cout<<"the min number is: "<<min<<endl;
    cout<<"the max number is: "<<max<<endl;

    return 0;
}