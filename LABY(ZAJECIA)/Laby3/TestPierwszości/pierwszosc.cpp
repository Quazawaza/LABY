#include <iostream>

using namespace std;

int main()
{
    int x;
    int first;
    cin >> x;
    for (int i = 2; i < x; i++)
    {
        if (i%x==0)
        {
            first = 0;
        }
        else
        {
            first = 1;
        }
        
    }
    cout << first;
}