#include<iostream>
using namespace std;

int main(){

/*My SOLUTION : but the correct answer is the reverse of my answer
    int n;
    cin>>n;

    int rem;
    int sum=0;
    while(n!=0){
        sum=0;
        rem=n%8;
        n=n/8;
        sum=sum+rem;
        cout<<sum;
    }
    my ANSWER= 771
    CORRECT ANSWER= 177
*/

//eg. 125 ans=177
    int n;
    cin>>n;

    string octal="";
    int rem;
    while(n!=0){
        rem=n%8;
        n=n/8;
        char c = rem+'0';
        octal=c+octal;
        /*wrong answer=771 if we write 
        octal=octal+c;
        correct answer =177 if we write 
        octal=c+octal;
        */

    }
    cout<<octal<<endl;

    return 0;
}