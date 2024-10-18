#include <iostream>

using namespace std;

int main()
{
    int fn;
    int f0;
    int f1;
    int f2;
    int n;

    cin >> n;

    /*
    F0 = 0
    F1 = 1
    F2 = 2
    Fi+3 = Fi+Fi+1 dla i>=0
    */

    f0 = 0;
    f1 = 1;
    f2 = 2;

    if(n==0) fn = f0;
    if(n==1) fn = f1;
    if(n==2) fn = f2;

    for (int i = 0; i < n-2; i++)
    {
        fn=f0+f1;
        f0=f1;
        f1=f2;
        f2=fn;
    }
    

    cout << fn;
}