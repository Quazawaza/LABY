#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    int t;

    cin >> n >> m;

    while (n%m!=0)
    {
        t = m;
        m = n % m;
        n = t;
    }

    cout << m;


}