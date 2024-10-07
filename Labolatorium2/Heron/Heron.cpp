#include <iostream>
using namespace std;
int main ()
{
    double X, Y, Z, P, OB;

    cin >> X;
    cin >> Y;
    cin >> Z;

    OB = (X + Y + Z)/2;
    double pod_pierwiastkiem = OB * (OB - X) * (OB - Y) * (OB - Z);
    P = sqrt(pod_pierwiastkiem);

    cout << fixed;
    cout.precision(6);
    cout << P << endl;
    
    return 0;
}