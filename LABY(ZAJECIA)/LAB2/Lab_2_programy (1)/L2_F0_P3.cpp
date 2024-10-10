
// L2_F0_P3.cpp    Instrukcja warunkowa switch() i instrukcja break 

/*  Program okreœla stan gleby na podstawie pomiaru wilgotnoœci [%] */
/*  Kryteria:   0..  9 %    - pustynia                              */ 
/*             10.. 19 %    - gleba bardzo sucha                    */
/*             20.. 39 %    - gleba sucha                           */
/*             40.. 69 %    - gleba w³aœciwa                        */
/*             70.. 89 %    - gleba mokra                           */
/*             90.. 99 %    - bagno                                 */

#include <iostream>  
using namespace std;

int main ()
{
  int wg;
  cout << "Podaj wilgotnosc gleby (0 <= wg <= 99): ";
  cin >> wg;
  if (wg >= 0)wg = wg/10;
  cout << "Stan gruntu :  ";
  switch (wg){
      case 0 :  { cout << "pustynia " << endl; break;}   
      case 1 :  { cout << "gleba bardzo sucha " << endl; break;}
      case 2 : 
      case 3 :  { cout << "gleba sucha " << endl; break;}
      case 4 :
      case 5 : 
      case 6 :  { cout << "gleba wlasciwa " << endl; break;}
      case 7 : 
      case 8 :  { cout << "gleba mokra " << endl; break;}
      case 9 :  { cout << "bagno " << endl; break;}
      default:  { cout << "niepoprawne dane " << endl; break;}
  }
  system("PAUSE");
  return 0;
}

