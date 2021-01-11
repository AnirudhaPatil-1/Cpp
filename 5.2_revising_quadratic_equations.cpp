#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){

    float a, b, c;
    cin>> a >> b >> c;
    cout<<endl;

    float d, d1;
    d=b*b-4*a*c;
    d1=sqrt(d);

    if(d==0){
        cout<<"Real and Equal"<<endl;
    }
    else if(d>=0){
        cout<<"Real and distinct"<<endl;
    }
    else if(d<0){
        cout<<"Imaginary"<<endl;
    }

    int x1, x2;
    if(d>=0){
        x1=(-b - d1)/2*a;
        x2=(-b + d1)/2*a;
        cout<<x1<<" "<<x2<<endl;
    }

    return 0;
}