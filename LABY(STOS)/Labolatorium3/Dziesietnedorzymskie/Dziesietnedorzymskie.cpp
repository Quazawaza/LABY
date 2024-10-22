#include <iostream>

using namespace std; 

int main()
{
    int x;
    // I - 1
    // V - 5
    // X - 10
    // L - 50
    // C - 100
    // D - 500
    // M - 1000
    //
    //Metoda na rozwiązanie, znaleźć największą liczbę która mieści się w zakresie x i ją odjąć równocześnie przypisując reperezentację tej liczby w systemie dziesiętnym, powtarzać do momentu x=0
    // UWAGA, liczby np4 nie są zapisywane jako IIII tylko IV
    while (cin>>x)
    {
        if (x==0)
        {
            cout << " ";
        }
        while (x!=0)
        {
            if (x >= 1000)
            {
                cout << "M";
                x -= 1000;
            }
            else if (x >= 900 && x < 1000)
            {
                cout << "CM";
                x -= 900;
            }
            else if (x >= 500 && x < 900)
            {
                cout << "D";
                x -= 500;
            }
            else if (x >= 400 && x < 500)
            {
                cout << "CD";
                x -= 400;
            }
            else if (x >= 100 && x < 400)
            {
                cout << "C";
                x -= 100;
            }
            else if (x >= 90 && x < 100)
            {
                cout << "XC";
                x -= 90;
            }
            else if (x >= 50 && x < 90)
            {
                cout << "L";
                x -= 50;
            }
            else if (x >= 40 && x < 50)
            {
                cout << "XL";
                x -= 40;
            }
            else if (x >= 10 && x < 40)
            {
                cout << "X";
                x -= 10;
            }
            else if (x == 9)
            {
                cout << "IX";
                x -= 9;
            }
            else if (x >= 5 && x < 9)
            {
                cout << "V";
                x -= 5;
            }
            else if (x == 4)
            {
                cout << "IV";
                x -= 4;
            }
            else
            {
                cout << "I";
                x -= 1;
            }
        }
        cout << endl;
        
    }
    
}