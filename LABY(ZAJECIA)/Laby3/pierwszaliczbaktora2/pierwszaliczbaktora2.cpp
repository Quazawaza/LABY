#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int k;
    int result;

    cin >> a >> b >> k;
    for (; a <= b; a++)
    {
        if (a%k==0) 
        {
            result = a;
            break;
        }
        else result = 0;
    }
    cout << result;
}