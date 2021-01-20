#include<iostream>
using namespace std;

int main(){
    
    int fmin;
    int fmax;
    int increment;
    // cout<<"type initial fahrenheit value: ";
    // cin>>fmin;
    // cout<<"type max fahrenheit value: ";
    // cin>>fmax;
    // cout<<"type increment value: ";
    // cin>>increment;
    cout<<"type min value, max value and increment in fahrenheit: "<<endl;
    cin>>fmin>>fmax>>increment;
    int c;
    while( fmin<=fmax){
        cout<<fmin<<" ";
        c= (5*(fmin-32))/9.0;
        cout<<c<<endl;
        fmin=fmin+increment;
    }

    return 0;
}

/*
format to persue...
compact and clean and MINIMALIST AND FUNCTIONAL

int main(){

int ll, ul, inc;
cout<<input ll ul inc<<endl;
cin>>ll>>ul>>inc;

for(i=ll;i<=ul;i=i+inc){
    int c;
    c=((5/9.0)*(f-32));
    cout<<f<<"\t"<<c<<endl;
}
return 0;
}