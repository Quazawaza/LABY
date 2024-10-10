#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x > 0)
	{
		if (x%2==0 && x%3==0)
		{
			cout << "parzysta, podzielna przez 3";
		}
		else if (x%2==0 && x%3!=0)
		{
			cout << "parzysta, niepodzielna przez 3";
		}
		else if (x%2 != 0 && x%3 == 0)
		{
			cout << "nieparzysta, podzielna przez 3";
		}
		else
		{
			cout << "nieparzysta, niepodzielna przez 3";
		}
	}
	else
	{
		cout << "ujemna";
	}
	return 0;
}