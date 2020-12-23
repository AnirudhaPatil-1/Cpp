#include <iostream>
using namespace std;

int main()
{

    //simple interest
    //declare variables
    int p, r, t;
    float si;

    //Assign values to the buckets (storage in the memory)
    /*
    p = 10;
    r = 25;
    t = 1;
    */
    cin >> p >> r >> t;

    //250/100=2.50
    //every statement in c++ should be terminated by semicolon ie ";"

    si = p * r * t / 100.0;

    //Typecasting-> Implicit
    //integer/integer=integer
    //float/integer=float
    //integer/float=float

    cout
        << si << endl;

    return 0;
}