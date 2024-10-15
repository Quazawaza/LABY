#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;

    int t; //zmienna tymczasowa

    //Aby posortować 4 elementy można zastosować trochę inną metodę niż porównywanie każdego elementu z każdym
    //Bierzemy pierwsze 2 elementy i porównujemy je ze sobą, potem 2 kolejne i też porównujemy je ze sobą
    //Następnie porównujemy wartości największe z 2 poprzednich porównań - To będzie największy element. itd.

    cin>> a >> b >> c >> d; //wczytanie elementów

    if (a>=b) //szukanie najmniejszej wartości spośród argumentów a i b
    {
        t=a;
        a=b;
        b=t;
    }
    if (c>=d) //szukanie najmniejszej wartośći spośród argumentów c i d
    {
        t=c;
        c=d;
        d=t;
    }
    if (a>=c) //porównanie najmniejszych wartości z dwóch poprzednich porównań
    {
        t=a;
        a=c;
        c=t;
    }
    if (b>=d) //porównanie największych wartości z dwóch poprzednich porównań
    {
        t=b;
        b=d;
        d=t;
    }
    if (b>=c) //sprawdzanie czy najmniejsza wartość a i b nie jest przpadkiem większa od najmniejszej wartosci c i d
    {
        t=b;
        b=c;
        c=t;
    }
    
    
    cout << a <<" "<< b <<" "<< c << " " << d;

}