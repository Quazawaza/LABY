#include <iostream>

using namespace std;

int main()
{
    int n; //n jest iteratorem 
    int f0;

    cin >> n;

    f0=1;

    //F0 = 0
    //Fi+1 = Fi + 3 dla i≥0

    while (n)
    {
        f0=f0+3;
        n--;
    }
   cout << f0; 
}