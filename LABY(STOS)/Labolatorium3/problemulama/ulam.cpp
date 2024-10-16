#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;

    for (; m > 0; m--)   
    {
        int a;
        cin >> a; //wczytujemy m razy zmienną a

        //każde a trzeba doprowadzić do 1, zakładamy że każdą liczbe a da sie do takiej postaci sprowadzic 

        //Dla pewnej liczby a jeśli:
        //a jest parzyste, to podziel a przez dwa,
        //a jest nieparzyste to pomnóż przez trzy i dodaj jeden.
        //Czy powtarzanie takiej procedury pozwoli osiągnąć liczbę 1 dla każdej a?
        //Ile iteracji jest potrzebne by owo 1 osiągnąć?

        int i = 0;
        while (a!=1) //wykonuj póki a różne od 1
        {
            if (a%2==0) // dla a parzystego
            {
                a=a/2;
                i = i++;
            }

            else // dla a nieparzystego
            {
                a=(a*3)+1;
                i = i++;
            }
        
        }
        cout << i <<endl;
    }
}