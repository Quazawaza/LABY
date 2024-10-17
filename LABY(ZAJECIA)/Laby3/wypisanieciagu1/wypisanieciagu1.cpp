#include <iostream>

using namespace std;

int main()
{
    int n; //n jest iteratorem 
    int f0;

    cin >> n;

    f0=2;

    //F0 = 2
    //Fi+1 = 2Fi - 1 dla i≥0

    while (n)
    {
        f0=(2*f0)-1;
        n--;
    }
   cout << f0; 
}