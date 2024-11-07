#include <iostream>
#include <vector>

using namespace std;

int wypisz(const vector<int> &tab, int n)
{
    for (int i = 0; i < n; i++)
    {
       cout << tab[i] << " "; 
    }
    cout << endl;
    return 0;
}
int liczmin(const vector<int> &tab, int n)
{
    int warmin;
    warmin = tab[0];
    for (int i = 0; i < n; i++)
    {
        if (warmin > tab[i])
        {
            warmin = tab[i];
        }
    } 
    return warmin;
}
int suma(const vector<int> &tab, int n)
{
    int sumatab;
    sumatab = 0;
    for (int i = 0; i < n; i++)
    {
        sumatab += tab[i];
    }
    return sumatab;
}
double srednia(const vector<int> &tab, int n)
{
    return 1.0*suma(tab, n)/n;
}
int main ()
{
    int n;
    cin >> n;
    vector<int> tab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    wypisz(tab, n);
    cout << liczmin(tab, n) << endl;
    cout << suma(tab, n) << endl;
    cout << srednia(tab, n) << endl;
    return 0;
}