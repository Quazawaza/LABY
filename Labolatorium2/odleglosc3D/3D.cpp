#include <iostream>
#include <cmath>

int main()
{
    double X1, Y1, Z1, X2, Y2, Z2, dist;
    std::cin >> X1 >> Y1 >> Z1;
    std::cin >> X2 >> Y2 >> Z2;
    dist = sqrt(pow(X2-X1, 2)+pow(Y2-Y1, 2)+pow(Z2-Z1, 2)); // liczenie odleglosci miedzy punktami ze wzoru
    printf("%lf",dist); // wyświetlenie wartości
    return 0;
}