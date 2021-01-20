#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int previous;
    cin>>previous;

    bool valid = true;
    bool decreasing=true;
    
    while(--n){
        int current;
        cin>>current;

        if(current==previous){
            valid=false;
            break;
        }
        else if(current>previous){
            decreasing= false;
            break;
        }
        else if(!decreasing && current<previous){
            valid=false;
            break;
        }
        previous=current;
    }
    cout<<boolalpha<<valid<<endl;
    
    return 0;
}