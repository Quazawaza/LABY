#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> tab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    int iterator;
    int tablen;
    iterator = 1;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j+=iterator)
        {
            cout << tab[j] << " ";
        } 
        cout << endl;
        iterator++;
    }
    
}
