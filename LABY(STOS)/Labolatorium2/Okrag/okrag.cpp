#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double X1, Y1, R1, X2, Y2, R2, d;
    cin >> X1 >> Y1 >> R1;
    cin >> X2 >> Y2 >> R2;

    d = sqrt(pow(X2-X1, 2)+pow(Y2-Y1, 2)); //obliczenie odległosci między punktami

    if (abs(R1-R2)<= d && d <=(R1+R2)) // Wzór sprawdzający czy okręgi się przecinają 
    {
        cout <<"T";
    }
    else
    {
        cout << "F";
    }
    return 0;
    
}