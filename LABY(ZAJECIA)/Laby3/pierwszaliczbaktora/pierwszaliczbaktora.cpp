#include <iostream>

using namespace std;

int main()
{
    int a;
    int k; 

    cin >> a >> k;

    while (a%k!=0)
    {
       a++;
    }
    
    cout << a;
    
}