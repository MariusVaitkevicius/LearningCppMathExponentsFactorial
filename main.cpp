#include <iostream>
#include <cmath>
using namespace std;

//                              2      3      4
//                             x      x      x
//  Calculate:    y = 1 + x + ---- + ---- + ---- .
//                             2!     3!     4!          (2! = 1 * 2;) (3! = 1 * 2 * 3;) (4! = 1 * 2 * 3 * 4;)

int main()
{
       int x;
    double y;
    cout<< "Enter x number: ";
    cin>> x;

    y=1+x+(pow(x,2))/(1*2)+(pow(x,3))/(1*2*3)+(pow(x,4))/(1*2*3*4);

    cout<<"y="<<y<<endl;
    return 0;
}
