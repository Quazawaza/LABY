#include <iostream>

using namespace std;

int main()
{
    int n; //n jest iteratorem 
    int f0;
    int fmin1;

    cin >> n;

    f0=0;

    //F0 = 0
    //Fi = Fi-1 + i*i dla i>0

    for (int i = 0; i <= n; i++)
    {
        if (i==1) 
        {
            f0 = 1;
            continue;
        }
        fmin1 = f0;
        f0=(fmin1)+(i*i);
    }
   cout << f0; 
}