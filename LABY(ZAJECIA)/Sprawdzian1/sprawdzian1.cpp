#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    vector<int> tab(n);
    if(n<2 || n>200) cout << "blad";
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for (int i = 1; i < n; i+=2)
    {
        cout << tab[i] << " ";
    }
    cout << endl;

    int wartmin;
    wartmin = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[wartmin]>tab[i])
        {
            wartmin=i;
        }
    }
    cout << tab[wartmin] << endl;

    double srednia;
    double suma;
    int mianownik;
    suma = 0;
    mianownik = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i]%2==0)
        {
            mianownik++;
            suma += tab[i];
        }
        
    }
    if (mianownik == 0)
    {
        cout << "#";
    }
    else
    {
        srednia = suma/mianownik;
        cout << srednia;
    }
    
    
}