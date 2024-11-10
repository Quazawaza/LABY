#include <iostream>
#include <vector>

using namespace std; 

struct Oceny 
{
    int spr1;
    int spr2;
};

void Wypisz (const vector<Oceny> &tab, int len_t) // funkcja wypisująca oceny /.3
{
    for (int i = 0; i < len_t; i++)
    {
        cout << tab[i].spr1 << " " << tab[i].spr2 << endl;
    }
    
}
Oceny MinSpr1 (const vector<Oceny> &tab, int len_t) //funkcja zwaracjąca wartość najniższej oceny ze spr1 /.4
{
    int wartmin = 0;
    for (int i = 0; i < len_t; i++)
    {
        if (tab[wartmin].spr1 > tab[i].spr1)
        {
            wartmin = i;
        }
    }
    return tab[wartmin];
}

void Zdane (const vector<Oceny> &tab, int len_t, int prog) // funkcja zwaracjąca liczbę studentów ze średnią ocen wyższa niż na progu zdawalnosci
{
    int ilstud;
    ilstud = 0;
    for (int i = 0; i < len_t; i++)
    {
        double srednia;
        double suma;
        srednia = 0;
        suma = 0;

        suma = tab[i].spr1 + tab[i].spr2;
        srednia = suma/2;
        if (srednia >= prog)
        {
            ilstud++;
        }
    }
    cout << "zdal: " << ilstud;
    
}

int main()
{
    int n; 
    int p;
    cin >> n; // Wprowadz n /.1
    vector<Oceny> tab(n); // utworzenie wektora struktur
    for (int i = 0; i < n; i++) // wczytaj do wektora n oceny /.2
    {
        cin >> tab[i].spr1;
        cin >> tab[i].spr2;
    }
    cin >> p; // wprowadzenie preogu zdawalnosci (średnia ocen spr 1 i spr 2)
    Wypisz(tab, n);
    cout << "najmn: " << MinSpr1(tab, n).spr1 << " " << MinSpr1(tab, n).spr2 << endl;
    Zdane(tab, n, p);
}