#include <iostream>
using namespace std;
int main()
{
    int X;
    int Y;
    int Z;
    int one;
    int two;
    int three;

    cin >> X;
    cin >> Y;
    cin >> Z; 

    if (X > Y)
    {
        if (X > Z)
        {
            one = X;
            if (Y > Z)
            {
                two = Y;
                three = Z;
            }
            else
            {
                two = Z;
                three = Y;
            }
            
        }
        else
        {
            one = Z;
            two = X;
            three = Y;
        }
        
    }
    else
    {
        if (Y > Z)
        {
            one = Y;
            if (Z > X)
            {
                two = Z;
                three = X;
            }
            else
            {
                two = X;
                three = Z;
            }
            
            
        }
        else
        {
            one = Z;
            two = Y;
            three = X;
        }
        
    }
    cout << one << " " << two << " " << three;
    return 0;
    
    
}