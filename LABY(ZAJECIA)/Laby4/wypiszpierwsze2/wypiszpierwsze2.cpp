#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;

    if (a < 2)
    {
        a=2;
    }
    

    int n = b - a + 1; 
    vector<bool> tab(n, true); 

    for (int i = 2; i * i <= b; ++i) {
        int start = (i * i > (a + i - 1) / i * i) ? i * i : (a + i - 1) / i * i;
        start -= a;
        for (int j = start; j < n; j += i) {
            tab[j] = false;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (tab[i]) {
            cout << i + a << " ";
        }
    }
}