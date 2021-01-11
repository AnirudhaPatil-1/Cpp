#include<iostream>
using namespace std;

int main(){

    //problem - read a list of characters (sentence)
    //cin.get()

    char ch;
    // cin>>ch;
    //reads the first char
    ch=cin.get(); //this method reads any single char including spaces/newlines from the input buffer

    while(ch!='.'){
        //Print the last character that we have read
        cout<<ch;
        //Update  my char in the memory ( read the next character)
        // cin>>ch;
        //reads the rest of the characters
        ch=cin.get();
        //using cout<<endl; causes to type each character on a single line 
    }
    //using cout<<endl; here as after the program terminate it creates a new line
    cout<<endl;

    return 0;
}