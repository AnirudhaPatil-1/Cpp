#include <iostream>
using namespace std;

int main(){

    //comma operator
    int a, b,c;

    //assignment operator
    a=10;
    b=20;
    c=30;

    //logical operator
    //and can be written as &&
    //or can be written as ||
    if(c>a && c>b){
        cout<<"c is greater than a and b"<<endl;
    }

    //ternary operator
    int x=c%2==0?1:0;
    cout<<"value of x is: "<<x<<endl;
    b%2==0?cout<<b<<" :even":cout<<b<<" :odd";
    cout<<endl;

    //Bitwise operator
    x=5;
    int y=7;
    cout<<"AND: "<<(x&y)<<endl;
    cout<<"OR: "<<(x|y)<<endl;
    cout<<"NOR: "<<(x^y)<<endl;

    //Shift operator

      // left shift means x*(2 raised to number mentioned) ie here       5*((2)raised to 2)
    x=x<<2;
    cout<<x<<endl;
      //right shift means y/(2 raised to number mentioned)
    y=y>>1;
    cout<<y<<endl;
      //or write the above expression cout<<(y>>1)<<endl;

    //Unary operator
      //Address of
      cout<<"address of x: "<<(&x)<<endl;
      
      //Post increment / decrement operator
      a=10;
      int z=a++; // z=10 , a=11
      cout<<"value of a: "<<a<<endl;
      cout<<"value of z: "<<z<<endl;
      z =++a; // a=12 , z=a=12
      cout<<"value of a: "<<a<<endl;
      cout<<"value of z: "<<z<<endl;

    //Compound assignment operator
    a=10;
    a*=2; //a=20
    cout<<"value of a after *: "<<a<<endl;
    a%=2; // 0 as remainder is 0 
    cout<<"value of a after %: "<<a<<endl;
    b=1;
    b<<=1; // b=2
    cout<<"value of b after left shift: "<<b<<endl;

    
    

    return 0;
}