#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, Delta, X1, X2;
    cin >> A >> B >> C;
    Delta = pow(B,2)-(4*A*C); //Wzór na delte
    if (A==0 && B==0 && C==0) //Jeżeli trojmian jest tożsamością to ma nieskonczenie wiele rozwiązań
    {
        cout << "N";
    }
    else
    {
        if (A==0) //Jeżeli A jest równe 0 to mamy funkcje liniową
        {
            if (B==0) // jeżeli B jest równe 0 to jest brak rozwiązań bo funkcja jest stała
            {
                cout << "B";
            }
            else // Obliczanie pierwiastka funkcji linowej 
            {
                X1 = -C/B;
                cout << fixed;
                cout.precision(6);
                cout << X1;
            }
        }
        
        else if (Delta > 0) //jeżeli delta większa od zera to są 2 pierwiastki 
        {
            Delta = sqrt(Delta);
            X1=(-B-Delta)/(2*A);
            X2=(-B+Delta)/(2*A);

            cout << fixed;
            cout.precision(6);
            cout << X1 << " " << X2;
        }
        else if (Delta == 0) //jeżeli delta = 0 to mamy jeden pierwiastek
        {
            X1=(-B)/(2*A);
            X2= 0;
            cout << fixed;
            cout.precision(6);
            cout << X1;
        }
        else // delta mniejsza niż 0, brak rozwiązań
        {
            X1,X2=0;

            cout << fixed;
            cout.precision(6);
            cout << "B";
        }
    }   
    return 0;
}