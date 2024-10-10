// L2_F0_Z2b.cpp           
#include <iostream>
using namespace std;

int main()
{ double a, b, c;
  cout << "Podaj 3 rozne liczby rzeczywiste: a b c ";  cin >> a >> b >> c;
  cout << endl << "Czy liczba c zawiera sie w przedziale (a,b) lub (b,a)\?   ";
//---------------------------------------------------------------
  if( c > a )                               
	  if ( c < b) cout << "TAK " << endl;
	  else        cout << "NIE " << endl;
  else	  
	  if ( c > b) cout << "TAK " << endl;
	  else        cout << "NIE " << endl;
//---------------------------------------------------------------
system ("PAUSE");
return 0;
}
