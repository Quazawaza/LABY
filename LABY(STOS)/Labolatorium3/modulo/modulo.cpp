#include <iostream>
#include <cmath>

int main()
{
    long a,n,k,modulo;
    while (std::cin >> a >> n >> k) // gdy istneje a, n, k, to wykonuj kod
    {
        //Należy obliczyć n-tą potęgę liczby modulo k, zatem dla zmiennych a,n,k należy wyliczyć a^n mod k
        // a^2 mod k = ( (a mod k)^2 )mod k
        a = a%k;
        modulo = pow((a),n);
        modulo = modulo%k;

        std::cout << modulo << std::endl;
    }
    return 0;
    
}