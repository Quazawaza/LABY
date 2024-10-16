#include <iostream>

using namespace std;

int main() {
    // Zmienne dla 8 liczb
    int a, b, c, d, e, f, g, h;

    // Wczytywanie liczb od użytkownika
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    // Ręczne porównania i zamiany zmiennych
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (d > e) swap(d, e);
    if (e > f) swap(e, f);
    if (f > g) swap(f, g);
    if (g > h) swap(g, h);

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (d > e) swap(d, e);
    if (e > f) swap(e, f);
    if (f > g) swap(f, g);

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (d > e) swap(d, e);
    if (e > f) swap(e, f);

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (d > e) swap(d, e);

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);

    if (a > b) swap(a, b);

    // Wyświetlanie posortowanych liczb
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h;

    return 0;
}
