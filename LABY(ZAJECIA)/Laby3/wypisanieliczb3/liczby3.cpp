#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;

    cin >> n >> m;
    while (n<=m)
    {
        if (n%2==0)
        {
            cout << n << " ";
        }
        n++;
    }
    

}