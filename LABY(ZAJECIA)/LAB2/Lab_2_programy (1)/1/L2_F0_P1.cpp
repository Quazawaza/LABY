
// L2_F0_P1.cpp          Instrukcje warunkowe if-else, if 
 
#include <iostream>  
#include <iomanip>    
#include <cmath>  
using namespace std;

int main()
{
  float a, b;      
  bool war;
  cout << setiosflags(ios::fixed);     // ustawienie formatu wyj�ciowego liczb zmiennoprzecinkowych
                                       // zamiast fixed mo�e by� np. scientific
  cout.precision(5);                   // 5 cyfr po przecinku              

  cout << "Podaj pierwsza liczbe: ";  cin >> a;
  cout << "Podaj druga liczbe: ";     cin >> b;
                                                    
  //---Instrukcja (A)
  if (a != b) 
      cout << a << " jest rozne od " <<  b << endl;
  else
      cout << a << " jest rowne " << b << endl;

  //--- Instrukcja (B)
  if ( !(b+2)) cout << b << " jest rowne " <<  -2 << endl;

  //--- Instrukcja (C)
  if ( !( a && b) ) cout << "Co najmniej jedna z liczb jest rowna " << 0 << endl;

  //--- Instrukcja (D)
  war = ( a > -10 && a < 10 ) && ( b > -10 && b < 10 ); 
  if ( !war ) cout << "Co najmniej jedna z liczb jest spoza przedzialu [-10, 10]" << endl; 

  //--- Instrukcja (E)
  if ( (a <-1 || a >1) || a == 0) 
      cout << "Dla a = " << a << " funkcja y jest nieokreslona" << endl;
  else  
      cout << "Dla a = " << a << " wartosc funkcji y(a) = " << asin(a) + 1/a + sin(a) << endl;

 //----------------------------
 system("PAUSE");                                    
 return 0;
}
