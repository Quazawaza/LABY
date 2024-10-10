#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, max;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if (A>=B && A>=C && A>=D) //sprawdzenie czy A jest najwieksze 
    {
        max = A;
    }
    else if (B>=A && B>=C && B>=D) //sprawdzenie czy B jest najwieksze 
    {
        max = B;
    }
    else if (C>=A&&C>=B&&C>=D) //sprawdzenie czy C jest najwieksze 
    {
        max = C;
    }
    else // jeżel żadne z powyższych nie jest najwieksze to najwieksze musi być D
    {
        max = D;
    }
    cout << max;
    return 0;
}