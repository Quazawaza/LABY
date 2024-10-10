#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z; //deklaracja zmiennych [typ]

    cin >> X;
    cin >> Y;
    cin >> Z;

    if (X+Y>Z && X+Z>Y && Z+Y>X) //sprawdzenie czy mozna utworzyc trojkat
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    
}