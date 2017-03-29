#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y;

    cout << "Digite o valor de X:" << endl;
    cin >> x;
    if (x<=1.0)
    {
        y = 1.0;
    }
    else
    {
        if ((x>1.0) && (x<=2))
        {
            y = 2;
        }
        else
        {
            if ((x>2.0) && (x<=3))
            {
                y = pow(x,2);
            }
            else
            {
                y = pow(x,3);
            }
        }
    }
    cout << "Seu Y e: " << y;

}
