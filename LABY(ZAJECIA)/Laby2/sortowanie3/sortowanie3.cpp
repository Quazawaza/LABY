#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;
	int z;

	int lowest;
	int middle;
	int highest;

	cin >> x >> y >> z;

	if (x<=y && x<=z)
	{
		lowest = x;
		if (y<=z)
		{
			middle = y;
			highest = z;
		}
		else
		{
			middle = z;
			highest = y;
		}
	}
	if (y <= x && y <= z)
	{
		lowest = y;
		if (x <= z)
		{
			middle = x;
			highest = z;
		}
		else
		{
			middle = z;
			highest = x;
		}
	}
	if (z <= y && z <= x)
	{
		lowest = z;
		if (y <= x)
		{
			middle = y;
			highest = x;
		}
		else
		{
			middle = x;
			highest = y;
		}
	}
	cout << lowest << " " << middle << " " << highest;
	return 0;

}