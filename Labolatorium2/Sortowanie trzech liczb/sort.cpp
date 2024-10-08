#include <iostream>
using namespace std;
int main()
{
    int X,Y,Z,one,two,three;

    cin >> X >> Y >> Z;

    if (X>=Y&&X>=Z) //sprawdzenie czy X jest najwieksze
    {
        one=X;
        if (Y >= Z) //czy Y jest druga najwieksza wartoscia
        {
            two=Y;
            three=Z;
        }
        else // jeżeli Y nie jest druga najwieksza wartoscia to jest nia Z
        {
            two = Z;
            three = Y;
        }
    }
    else if (Y>=X && Y>=Z) //sprawdzenie czy Y jest najwieksza wartoscia
    {
        one = Y;
        if (X >= Z) //sprawdzenie czy X jest druga najwieksza wartoscia
        {
            two = X;
            three = Z;
        }
        else // jezeli X nie jest druga najwieksza wartoscia to jest nia Z 
        {
            two = Z;
            three = X;
        }  
    }
    else // Jezeli ani X ani Y nie sa najwieksza wartoscia, to jest nia Z
    {
        one = Z;
        if (X >= Y) //sprawdzenie czy X jest druga najwieksza wartoscia
        {
            two = X;
            three = Y;
        }
        else //jezeli X nie jest druga najwieksza wartoscia to jest nia Y
        {
            two = Y;
            three = X;

        }
    }
    cout << one << " " << two << " " << three;
    return 0;
}