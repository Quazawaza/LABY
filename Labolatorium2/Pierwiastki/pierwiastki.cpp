#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, Delta, X1, X2;
    cin >> A >> B >> C;
    Delta = pow(B,2)-(4*A*C);
    if (A==0 && B==0 && C==0)
    {
        cout << "N";
    }
    else
    {
        if (A==0)
        {
            if (B==0)
            {
                cout << "B";
            }
            else
            {
                X1 = -C/B;
                cout << fixed;
                cout.precision(6);
                cout << X1;
            }
        }
        
        else if (Delta > 0)
        {
            Delta = sqrt(Delta);
            X1=(-B-Delta)/(2*A);
            X2=(-B+Delta)/(2*A);

            cout << fixed;
            cout.precision(6);
            cout << X1 << " " << X2;
        }
        else if (Delta == 0)
        {
            X1=(-B)/(2*A);
            X2= 0;
            cout << fixed;
            cout.precision(6);
            cout << X1;
        }
        else
        {
            X1,X2=0;

            cout << fixed;
            cout.precision(6);
            cout << "B";
        }
    }   
    return 0;
}