#include <iostream>

using namespace std;

int main()
{
    int n;
    int x;
    int x0; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i==0) x0=x;
        if (x<x0) x0=x;
        x0=x0;
    }
    cout << x0;
}