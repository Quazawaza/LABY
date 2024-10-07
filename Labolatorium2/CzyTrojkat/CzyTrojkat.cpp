#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;

    cin >> X;
    cin >> Y;
    cin >> Z;

    if (X+Y>Z && X+Z>Y && Z+Y>X)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    
}