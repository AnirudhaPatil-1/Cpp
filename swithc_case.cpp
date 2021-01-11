#include<iostream>
using namespace std;

int main(){

char ch;
cin>>ch;
switch(ch){
    
    case 'b':
    case 'B': cout<<"Burger"<<endl;
    break;

    case 'c':
    case 'C': cout<<"Coke"<<endl;
    break;

    case 'd':
    case 'D': cout<<"Dosa"<<endl;
    break;

    default : cout<<"Please select correct option!"<<endl;

}

    return 0;
}