// L2_F0_Z4.cpp               Czy a b c moga tworzyc trojkat?

#include <iostream>
using namespace std;

int main()
{
  double a, b, c;
 
  cout << "Podaj 3 liczby rzeczywiste: a b c :  ";  cin >> a >> b >> c;
  cout << endl << "Czy liczby moga byc bokami trojkata\?   ";
  if ( b+c > a && a+c > b  && a+b > c ) cout << "TAK " << endl;
  else                                  cout << "NIE " << endl;

  system ("PAUSE");
  return 0;
}
