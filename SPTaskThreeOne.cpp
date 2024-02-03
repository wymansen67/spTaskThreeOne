#include <iostream>
#include <math.h>
using namespace std;
#define y 2
#define z 4
#define t sin( 2 + z )
#define x 6 * pow(t,2) - (z + 1) / pow(y,2)

int main()
{
    cout << "y = " << y << endl << "z = " << z << endl << "t = " << t << endl << "x = " << x;
}
 