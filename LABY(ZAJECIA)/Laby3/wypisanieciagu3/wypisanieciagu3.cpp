#include <iostream>

using namespace std;

int main()
{
    int n; //n jest iteratorem 
    int f0;

    cin >> n;

    f0=1;

    //F0 = 1
    //Fi+1 = Fi + i dla i≥0

    for (int i = 0; i < n; i++)
    {
        f0=f0+i;
    }
   cout << f0; 
}