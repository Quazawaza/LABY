#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int tab[200];
    int eltab;
    eltab = 0;
    for (int i = a; i < b; i++) //tworzymy tablice w zakresie [a,b]
    {
        tab[eltab]=i;
        eltab++;
    }
    int prime[200]; //tablica liczb pierwszych
    for (int i = a; i*i <= b; i++) //sprawdzamy czy kazdy element jest liczbą pierwsza (sito erastotenesa)
    {
        
    }
    
}