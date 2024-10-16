#include <iostream>

using namespace std;

int main()
{
    long long a,n,k,modulo;



    while (cin >> a >> n >> k) // gdy istneje a, n, k, to wykonuj kod
    {
        //Należy obliczyć n-tą potęgę liczby modulo k, zatem dla zmiennych a,n,k należy wyliczyć a^n mod k
        // a^2 mod k = ( (a mod k)^2 )mod k
        modulo = 1;

        a = a % k; // redukcja a do modulo k

        while (n > 0) {
            // Jeśli wykładnik jest nieparzysty, mnożymy wynik przez bazę
            if (n % 2 == 1)
                modulo = (modulo * a) % k;

            // Teraz podnosimy bazę do kwadratu i zmniejszamy wykładnik
            a = (a * a) % k;
            n = n / 2;
        }
        cout << modulo << endl;
    }
    return 0;
    
}