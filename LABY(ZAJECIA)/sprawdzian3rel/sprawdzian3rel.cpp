#include <iostream>
#include <fstream>

using namespace std;

struct studenci
{
    char imie[30];
    char nazwisko[30];
    int indeks;
    char grupa[2];
};

int main()
{
    char plikwej[30];
    cout << "wprowadz nazwe pliku wejsciowego: ";
    cin >> plikwej;
    cout << endl;

    fstream input(plikwej, ios::in);

    if (!input)
    {
        cout << "blad";
        return 0;
    }
    int n;
    input >> n;
    studenci* tab = new studenci[n];

    for (int i = 0; i < n; i++)
    {
        input >> tab[i].imie >> tab[i].nazwisko >> tab[i].indeks >> tab[i].grupa;
    }

    for (int i = 0; i < n; i++)
    {
        cout << tab[i].imie << tab[i].nazwisko<< tab[i].indeks << tab[i].grupa;
    }
    
    input.close();

    fstream licznosc("licznosc.txt", ios::out);

        int gr1 = 0;
        int gr2 = 0;
        int gr3 = 0;
        int gr4 = 0;
        int gr5 = 0;
        int gr6 = 0;
        int gr7 = 0;
        int gr8 = 0;
        int gr9 = 0;
        int gr10 = 0;

    for (int i = 0; i < n; i++)
    {
        if (tab[i].grupa[0] == '0')
        {
            gr1++;
        }
        if (tab[i].grupa[0] == '1')
        {
            gr2++;
        }
        if (tab[i].grupa[0] == '2')
        {
            gr3++;
        }
        if (tab[i].grupa[0] == '3')
        {
            gr4++;
        }
        if (tab[i].grupa[0] == '4')
        {
            gr5++;
        }
        if (tab[i].grupa[0] == '5')
        {
            gr6++;
        }
        if (tab[i].grupa[0] == '6')
        {
            gr7++;
        }
        if (tab[i].grupa[0] == '7')
        {
            gr8++;
        }
        if (tab[i].grupa[0] == '8')
        {
            gr9++;
        }
        if (tab[i].grupa[0] == '9')
        {
            gr10++;
        }
    }
    if (gr1>0)
    {
        licznosc << "0 - " << gr1 << endl;
    }
        if (gr2>0)
    {
        licznosc << "1 - " << gr2 << endl;
    }
    if (gr3>0)
    {
        licznosc << "2 - " << gr3 << endl;
    }
    if (gr4>0)
    {
        licznosc << "3 - " << gr4 << endl;
    }
    if (gr5>0)
    {
        licznosc << "4 - " << gr5 << endl;
    }
    if (gr6>0)
    {
        licznosc << "5 - " << gr6 << endl;
    }
    if (gr7>0)
    {
        licznosc << "6 - " << gr7 << endl;
    }
    if (gr8>0)
    {
        licznosc << "7 - " << gr8 << endl;
    }
    if (gr9>0)
    {
        licznosc << "8 - " << gr9 << endl;
    }
    if (gr10>0)
    {
        licznosc<< "9 - " << gr10 << endl;
    }
    
    licznosc.close();

    fstream stos("stos.txt", ios::out);
    

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < 9; j++)
        {
             for (int k = 0; k < 4; k++)
            {
                if (toupper(tab[i].imie[k]) > 'X' || toupper(tab[i].imie[k]) < 'A' )
                {
                    tab[i].imie[k] = '_';
                } 
            }
            for (int k = 0; k < 4; k++)
            {
                if (toupper(tab[i].nazwisko[k]) > 'X' || toupper(tab[i].nazwisko[k]) < 'A' )
                {
                    tab[i].nazwisko[k] = '_';
                }
            }
        }
    }
        
    for (int i = 0; i < n; i++)
    {
        char haslo[9];
        for (int j = 0; j < 8; j++)
        {
            if (j<4)
            {
                haslo[j] = tab[i].imie[j];
            }
            else
            {
                haslo[j]= tab[i].nazwisko[j-4];
            }
        }
        stos << tab[i].indeks << " " << haslo[0] << haslo[1] << haslo[2] << haslo[3] << haslo[4] << haslo[5] << haslo[6] << haslo[7] << endl;
    }
    stos.close();
    delete[] tab;



}