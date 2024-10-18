#include <iostream>

using namespace std;

int main()
{
    int fn;
    int f0;
    int f1;
    int n;

    cin >> n;

    // F0 = 0
    // F1 = 1
    // Fi+2 = Fi+Fi+1 dla i>=0

    f0 = 0;
    f1 = 1;

    if (n == 0)
        fn = f0;
    if (n == 1)
        fn = f1;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }
    cout << fn;
}