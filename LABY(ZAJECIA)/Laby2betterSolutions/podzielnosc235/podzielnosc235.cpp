#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    if (x<0)
    {
        cout << "ujemna";
    }
    else
    {
        //podpbnie jak w przypadku podzielnosci przez 2 i 3 mozna sprawdzic najpierw czy liczba jest parzysta, jeżeli nie to dodać prefix "nie"
        //"Zabawa" zaczyna się w momencie sprawdzania podzielnosci 3 i 5, gdyż nie wystarczy zrobić if-a sprawdzającego podzielnosc przez 3 i przez 5, lecz trzeba rozpatrzyć 4 przypadki
        //w celu optymalizacji kodu i czasu edycji można utworzyć 2 zmienne typu bool
        //1. podzielnosc przez 3 - true/false
        //2. podzielnosc przez 5 - true/false
        //nastepne instrukcje warunkowe bedziemy porównywać do tych booleanów

        bool podz3 = (x%3==0);
        bool podz5 = (x%5==0);

        if (x%2!=0)
        {
            cout << "nie";
        }
        cout << "parzysta, ";
        
        if (podz3 && podz5)
        {
            cout << "podzielna przez 15";
        }
        else if (!podz3 && podz5)
        {
            cout << "niepodzielna przez 3, podzielna przez 5";
        }
        else if (podz3 && !podz5)
        {
            cout << "podzielna przez 3, niepodzielna przez 5";
        }
        else
        {
            cout << "niepodzielna przez 3 i 5";
        }
        //pozwoliło to nam na zaoszczędzenie paru linijek kodu
    }
    return 0;
}