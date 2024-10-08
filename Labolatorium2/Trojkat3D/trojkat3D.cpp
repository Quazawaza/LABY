#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double X1, Y1, Z1, X2, Y2, Z2, X3, Y3, Z3, P, OB;
    double ABX, ABY, ABZ, ACX, ACY, ACZ;
    double UI, UJ, UK;

    //============================

    //WPROWADZENIE WARTOSCI

    cin >> X1 >> Y1 >> Z1; //PUNKT A
    cin >> X2 >> Y2 >> Z2; //PUNKT B
    cin >> X3 >> Y3 >> Z3; //PUNKT C

    //==============================

    // OBLICZENIE DLUGOSCI ODCINKA AB

    ABX = X2 - X1;
    ABY = Y2 - Y1;
    ABZ = Z2 - Z1;

    //==============================

    // OBLICZENIE DLUGOSCI ODCINKA AC

    ACX = X3 - X1;
    ACY = Y3 - Y1;
    ACZ = Z3 - Z1;
    //=================================

    //OBLICZENIE WEKTORA

    UI = (ABY * ACZ) - (ABZ * ACY);
    UJ = (ABZ * ACX) - (ABX * ACZ);
    UK = (ABX * ACY) - (ABY * ACX);

    //=================================

    OB = sqrt(pow(UI, 2) + pow(UJ, 2) + pow(UK, 2)); //POLICZENIE OBWODU
    P = OB / 2; //POLICZENIE POLA
    cout << fixed;
    cout.precision(6);
    cout << P;
}