#include<iostream>
using namespace std;

int main(){

    cout<<"Please choose the option below:"<<endl;
    cout<< "press 1: to know the balance"<<endl;
        cout<< "press 2: to know the validity of your plan"<<endl;
        cout<< "press 3: to know about the recharge plans"<<endl;
        cout<< "press 9: to talk to our executive"<<endl;
        cout<< "press 0: to go back to the main menu"<<endl;

    char caller;
    cin>>caller;

    switch(caller){

        case '1': cout<<"your balance is 0 paisa"<<endl;
        break;

        case '2': cout<<"your plan expires now"<<endl;
        break;

        case '3': cout<<"we have dozen plans to choose from"<<endl;
        break;

        case '9': cout<<"Please wait while we connect you to the executive"<<endl;
        break;

        case '0': cout<<"getting back to the main menu"<<endl;
        break;

        default: cout<<"Please choose the valid number:"<<endl;

    }

    /*while(caller!='*'){
    tried placing the switch case inside the while loop but it breaks it .*/ 
    
}
