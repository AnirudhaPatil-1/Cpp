#include <iostream>
using namespace std;

int main()
{
    //Program to find sum of numbers from 1 to N

    int n;
    //Take input
    cin >> n;

    //Init Condition
    int i = 1;
    int sum = 0;

    while (i <= n)
    { //Stopping condition

        sum = sum + i;
        i = i + 1; // update statement
    }

    //Output the sum
    cout << sum << endl;

    return 0;
}
