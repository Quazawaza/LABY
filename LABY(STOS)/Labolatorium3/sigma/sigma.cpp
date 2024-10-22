#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int suma;
        suma = 0;
        for (int i = 1; i <= n; i++) if (n%i==0) suma += i;
        if (suma==(2*n)) cout << suma << " P" << endl;
        else cout << suma << endl;
    }
}