#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && c+b>a)
    {
        if ((a*a)+(b*b)>(c*c) && (a*a)<(b*b)+(c*c) && (b*b)<(a*a)+(c*c)) cout << 1;
        else cout << 0;
    }
    else
    {
        cout << "ERROR";
    }
    
}