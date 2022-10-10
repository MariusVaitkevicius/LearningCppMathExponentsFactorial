#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, R;
    double F;
    cout<< "iveskite m skaiciu:";
    cin>> m;
    cout<< "iveskite R skaiciu:";
    cin>> R;
    F=6,673*(pow(10,-8))*((m*1*m*2)/(R^2));
    cout<<"F="<<F<<endl;
    return 0;
    }

