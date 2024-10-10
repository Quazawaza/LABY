// L2_F0_Z1.cpp             Podzielnosc przez 3, 5 i 15

#include <iostream>
using namespace std;

int main()
{
  int i;
  cout << "Podaj liczbe calkowita: "; cin >> i;
  cout << "Wynik analizy: " << endl;
  if( i % 15 == 0 ) cout << "FizzBuzz" << endl;    // Ten warunek musi byæ pierwszy. Dlaczego?
  else if ( i % 3 == 0 ) cout << "Fizz" << endl;   // i%3 = reszta z dzielenia zmiennej i przez 3
  else if ( i % 5 == 0 ) cout << "Buzz" << endl;
  else cout << i << endl;

  system("PAUSE");
  return 0;
}
