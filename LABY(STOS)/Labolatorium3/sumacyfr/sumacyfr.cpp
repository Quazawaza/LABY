#include <iostream>

using namespace std;

//Napisz program, który n krotnie, wczyta dwie liczby naturalne policzy i wypisze ich iloczyn a następnie wypisze na ekran sumę cyfr tego iloczynu.

int main ()
{

    int n;
    int x;
    int y;
    int suma;
    int iloczyn;
    int num;

    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        suma = 0;
        cin >> x >> y;
        iloczyn = x*y; //obliczenie iloczynu
        num = iloczyn;
        while (num != 0)
        {
            suma += num%10; //Dodanie ostatniej cyfry
            num /= 10; //usunięcie ostatniej cyfry
        }
        cout << iloczyn << " " << suma << endl;
    }
    

}