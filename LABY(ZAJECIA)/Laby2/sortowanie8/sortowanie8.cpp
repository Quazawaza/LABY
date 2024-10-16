#include <iostream>

using namespace std;

int main() {
    // Zmienne dla 8 liczb
    int a, b, c, d, e, f, g, h;

    // Wczytywanie liczb od użytkownika
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    // Etap 1: porównania i zamiany
    if (a > b) { int temp = a; a = b; b = temp; }
    if (c > d) { int temp = c; c = d; d = temp; }
    if (e > f) { int temp = e; e = f; f = temp; }
    if (g > h) { int temp = g; g = h; h = temp; }

    // Etap 2: porównania i zamiany
    if (a > c) { int temp = a; a = c; c = temp; }
    if (b > d) { int temp = b; b = d; d = temp; }
    if (e > g) { int temp = e; e = g; g = temp; }
    if (f > h) { int temp = f; f = h; h = temp; }

    // Etap 3: porównania i zamiany
    if (a > e) { int temp = a; a = e; e = temp; }
    if (b > f) { int temp = b; b = f; f = temp; }
    if (c > g) { int temp = c; c = g; g = temp; }
    if (d > h) { int temp = d; d = h; h = temp; }

    // Etap 4: porównania i zamiany
    if (b > c) { int temp = b; b = c; c = temp; }
    if (d > e) { int temp = d; d = e; e = temp; }
    if (f > g) { int temp = f; f = g; g = temp; }

    // Etap 5: porównania i zamiany
    if (b > d) { int temp = b; b = d; d = temp; }
    if (c > e) { int temp = c; c = e; e = temp; }
    if (f > h) { int temp = f; f = h; h = temp; }

    // Etap 6: porównania i zamiany
    if (c > d) { int temp = c; c = d; d = temp; }
    if (e > f) { int temp = e; e = f; f = temp; }
    if (f > g) { int temp = f; f = g; g = temp; }

    // Wyświetlanie posortowanych liczb
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h;

    return 0;
}
