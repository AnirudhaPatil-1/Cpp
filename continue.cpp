#include<iostream>
using namespace std;

int main(){

    int no;
    

    while(true){
        cin>>no;

        if(no%9==0){
            continue;
            /*continue skips all the program below it and starts  at the beginning of the loop i.e. line no 9 in this program it also skips line no 18 here*/
        }

        cout<<"the number entered is: "<<no<<endl;
    }
    cout<<"the loop ended as the number: "<<no<<" is multiple of 9"<<endl;

    return 0;
}