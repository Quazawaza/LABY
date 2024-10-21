#include <iostream>

using namespace std;

int main()
{
    int n;
    int x;
    int min;
    int max;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        for (int j = 0; j < t; j++)
        {

            cin >> x;
            if (j == 0)
            {
                min = x;
                max = x;
            }
            if (min > x)
            {
                min = x;
            }
            if (max < x)
            {
                max = x;
            }
        }
        cout << min << " " << max << endl;
    }
}