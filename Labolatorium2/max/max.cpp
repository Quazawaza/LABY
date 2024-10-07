#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, max;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if (A>=B && A>=C && A>=D)
    {
        max = A;
    }
    else if (B>=A && B>=C && B>=D)
    {
        max = B;
    }
    else if (C>=A&&C>=B&&C>=D)
    {
        max = C;
    }
    else
    {
        max = D;
    }
    cout << max;
    return 0;
}