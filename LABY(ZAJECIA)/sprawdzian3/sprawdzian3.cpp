#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Uczen
{
    string imie;
    string nazwisko;
    int indeks;
    double ocena1;
    double ocena2;
    double ocena3;

};

 int main()
 {
    fstream input("input.txt", ios::in);
    if (!input)
    {
        cout << "blad";
        return 0;
    }

    int n; 
    input >> n;

    Uczen* uczniowie = new Uczen[n];

    for (int i = 0; i < n; i++)
    {
        input >> uczniowie[i].imie >> uczniowie[i].nazwisko >> uczniowie[i].indeks >> uczniowie[i].ocena1 >> uczniowie[i].ocena2 >> uczniowie[i].ocena3;
    }
    
    input.close();

    fstream niezdany("niezdany.txt", ios::out);
    if (!niezdany)
    {
        cout << "blad";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        double srednia;
        srednia = (uczniowie[i].ocena1 + uczniowie[i].ocena2 + uczniowie[i].ocena3)/3.0;
        char pierimie = uczniowie[i].imie[0];
        char piernazw = uczniowie[i].nazwisko[0];
        if(srednia < 50)
        {
            niezdany << uczniowie[i].indeks  << " " << pierimie << pierimie << endl;    
        }
        
    }

    niezdany.close();

    fstream progres("progres.txt", ios::out);
    if (!progres)
    {
        cout << "blad";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (uczniowie[i].ocena1 <= uczniowie[i].ocena2 && uczniowie[i].ocena2 <=  uczniowie[i].ocena3)
        {
            progres << uczniowie[i].indeks << " " << uczniowie[i].nazwisko << " " << uczniowie[i].ocena1 << " " << uczniowie[i].ocena2 << " " << uczniowie[i].ocena3 << endl;
        }
    }

    progres.close();
    
    
    
    
    delete[] uczniowie;
 }
