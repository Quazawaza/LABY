#include <iostream>

using namespace std;

int main()
{
    int x;
    int x0;
    int i;
    i=0;
    while (cin >> x)
    {
        if (i==0) x0=x;
        if (x<x0) x0=x;
        x0=x0;
        i++;
    }
    cout << x0;
}