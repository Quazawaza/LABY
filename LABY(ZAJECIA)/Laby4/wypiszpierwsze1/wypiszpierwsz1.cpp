#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    
    //liczba pierwsza - liczba podzielna przez 1 lub przez samą siebie
    /*sito erastotenesa - z przedziału od a do b wybieramy liczbę najmniejszą czyli a 
     i wykreślamy wszystkie jej wielokrotności większe od niej samej.
     Z pozostałych liczb wybieramy najmniejszą niewykreśloną liczbę i usuwamy wszystkie jej wielokrotności większe od niej samej.
     Wykreślanie powtarzamy do momentu, gdy liczba i której wielokrotność wykreślamy, będzie większa niż pierwiastek b 
     */

    vector<bool> tab(b+1, true); //wektor o rozmiarze b, w którym wszystkie wartosci są true
    tab[0] = tab[1] = false; // 0 i 1 nie są pierwsze 
    for (int i = 2; i <= sqrt(b); i++) // sprawdzenie każdej wartosci miedzy 2 a pierwiastek b
    {
        if (tab[i]) // jezeli wartosc o indexie i jest true to wykonaj petle
        {
            for (int j = i*i; j <= b; j+=i) // petla wykreslająca wielokrotnosci liczby o indexie a
            {
                tab[j] = false;
            }
        }
    }
    for (int i = a; i <= b; i++) // wypisanie liczb pierwszych 
    {
        if (tab[i])
        {
            cout << i << " ";
        }   
    }
    
    
}