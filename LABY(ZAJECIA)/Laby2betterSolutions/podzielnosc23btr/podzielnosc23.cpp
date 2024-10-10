#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x < 0) //sprawdzamy czy liczba jest ujemna
	{
        cout << "ujemna";
    }
	else
	{
		// nie trzeba tworzyć 4 ifów dla każdego warunku, zamiast tego if sprawdzający czy jest parzysta, i if sprawdzający podzielność przez 3 [2 if zamiast 4]
        if (x%2!=0)
        {
            cout << "nie"; // jeżeli nie parzysta, dodaje prefix nie do słowa parzysta
        }

        cout << "parzysta, ";

        if (x%3!=0)
        {
            cout << "nie "; //jeżeli nie podzielna przez 3, dodaje słowo nie do podzielna przez 3
        }
        cout << "podzielna przez 3";
	}
	return 0;
}

//Kod ma tyle samo linijek, lecz rozpatrujemy mniej warunków, i mniej trzeba pisać