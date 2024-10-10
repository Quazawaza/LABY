#include <iostream>

using namespace std;

int main()
{
	int X;
	int Y;

	cin >> X >> Y;

	if(X < Y)
	{
		cout << X << " " << Y << endl;
	}
	else
	{
		cout << Y << " " << X << endl;
	}
	return 0;
}