#include <iostream>
using namespace std;
int main ()
{
    double X, Y, Z, P, OB; //deklaracja zmiennych [typ]

    cin >> X;
    cin >> Y;
    cin >> Z;

    //Wzór Herona = sqrt(s*(s-x)*(s-y)*(s-z))

    OB = (X + Y + Z)/2; //1/2 Obwodu potrzebna do obliczenia pola
    double pod_pierwiastkiem = OB * (OB - X) * (OB - Y) * (OB - Z); //Wzór herona bez pierwiastka
    P = sqrt(pod_pierwiastkiem); //pierwiastkowanie

    cout << fixed; //ustawienie formatu fixed-point 
    cout.precision(6); //wyświetlenie liczby z dokładnością do 6 miejsc po przecinku [równie dobrze można użyć funkcji pritnf]
    cout << P << endl;
    
    return 0;
}