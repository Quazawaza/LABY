#include <iostream>

using namespace std;

void planpoc (bool plansza[100][100], int wys, int szer) // wprowadzenie wartosci do planszy 
{
    for (int i = 0; i < wys; i++)
    {
        for (int j = 0; j < szer; j++)
        {
            char usrin;
            cin >> usrin;
            bool wart;
            wart = false; 
            if (usrin == '.')
            {
                wart = false;
            }
            else if (usrin == '#')
            {
                wart = true;
            }
            else
            {
                cout << "blad";
                exit(1);
            }
            plansza[i][j] = wart;
        }
        
    }
}

void DeadAlive(bool plansza[100][100], int wys, int szer) // funkcja obliczająca czy komórka ma być martwa czy zywa
{
    bool NewPlansza[100][100]; // plansza pomocnicza 

    for (int i = 0; i < wys; i++)
    {
        for (int j = 0; j < szer; j++)
        {
            int count; // zliczanie komórek żywych 
            count = 0;   
            if ( i > 0 && plansza[i-1][j])  // sprawdzanie sąsiadów, oraz warunki przy granicach planszy 
            {
                count++;
            }
            if ( i > 0 && j > 0 && plansza[i-1][j-1])
            {
                count++;
            }
            if (j > 0 && plansza[i][j-1])
            {
                count++;
            }
            if (i < wys - 1 && j > 0&&plansza[i+1][j-1])
            {
                count++;
            }
            if (i < wys-1 && plansza[i+1][j])
            {
                count++;
            }
            if (i < wys-1 && j < szer-1 &&plansza[i+1][j+1])
            {
                count++;
            }
            if (j < szer-1 &&plansza[i][j+1])
            {
                count++;
            }
            if (i > 0&& j < szer-1 &&plansza[i-1][j+1])
            {
                count++;
            }
            if (count == 3) // warunki zachowania komórek
            {
                NewPlansza[i][j] = true;
            }
            else if (count == 2)
            {
                NewPlansza[i][j] = plansza[i][j];
            }
            else {
                NewPlansza[i][j] = false;
            }
        }
    }
    for (int i = 0; i < wys; i++) // aktualizacja tablicy 
    {
        for (int j = 0; j < szer; j++) 
        {
            plansza[i][j] = NewPlansza[i][j];
        }
    }
}


void wypiszplan(bool plansza[100][100], int wys, int szer) // funkcja wypisująca plansze 
{
    for (int i = 0; i < wys; i++)
    {
        for (int j = 0; j < szer; j++)
        {
            if (plansza[i][j])
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    
}

void Tura(bool plansza[100][100], int wys, int szer, int tura ) // funkcja dla tury 
{
    for (int i = 0; i < tura; i++)
    {
        DeadAlive(plansza, wys, szer);
    }
    wypiszplan(plansza, wys, szer);
}

int main()
{
    int w; // wysokosc
    int s; // szerokosc
    int k; // ilosc tur
    cin >> w;
    cin >> s;
    cin >> k; 

    bool plansza[100][100];
     
    planpoc(plansza, w, s);
    Tura(plansza, w, s, k);
};