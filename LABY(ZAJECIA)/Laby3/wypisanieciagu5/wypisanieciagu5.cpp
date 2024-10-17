#include <iostream>

using namespace std;

int main()
{
    int n; //n jest iteratorem 
    int f0;
    int f1;
    int fn;

    cin >> n;

    //F0 = 0
    //F1 = 1
    //Fi+2 = Fi + i + 2 dla i≥0

    for (int i = 0; i <= n; i++)
    {
        if (i==0) 
        {
            f0=0;
            continue;
        }
        if (i==1) 
        {
            f1=1;
            continue;
        }

        fn=(f1+i)+2;
        f0=f1;
        f1=fn;
    }
   cout << f0; 
}