//  TO DO

#include<iostream>
using namespace std;

int main(){

    int n;
    // n is number whose not multiples are to be found
    int n1;
    // n1 is how many non-multiples are to be printed
    cin>>n;
    cin>>n1;
    int m;
    m=1;
    int equation;
    // equation is the format to print the non-multiples of n

    int j=0;
    while(j<n){

        for(int i=0;i<=n1;i++){
        // int m=1;
        //this caused to keep m getting value 1 every loop
        if(n%m!=0){
        equation= 3*m+2;
            cout<<equation<<endl;
        }
        else {
            // cout<<m<<endl;
            //I used this cout m to determine why i was getting 1 as answer everytime
            cout<<"checking next number"<<endl;
            i=i-1;
            //used this to count only the non-multiples as n1 count
        }

        m=m+1;
    }

        j=j+1;
    }
    

    return 0;
}