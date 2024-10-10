// L2_F0_Z3.cpp                  Sprawdzenie ile rozwiazan ma rownanie kwadratowe
#include <iostream>
using namespace std;

int main()
{ 
  double a, b, c;
  cout << "Podaj 3 liczby rzeczywiste: a b c : ";  cin >> a >> b >> c;
  if( a != 0 ) {
      cout << endl << "Rownanie kwadratowe a*x*x + b*x + c = 0";
      if ( b*b - 4*a*c > 0 ) cout << " ma 2 rozwiazania rzeczywiste" << endl;
      else  if ( b*b - 4*a*c < 0 ) cout << " nie ma rozwiazan rzeczywistych" << endl;
	     else cout << " ma 1 rozwiazanie rzeczywiste" << endl;
     }        
  else	cout << "To nie jest rownanie kwadratowe" << endl;

system ("PAUSE");
return 0;
}
