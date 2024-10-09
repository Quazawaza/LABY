#include <iostream>

int main()
{
    int A,B;
    std::cin >> A >> B;

    for (int i = 0; i < A; i++) //Póki i < A, wykonuj instrukcje w pętli, po wykonaniu dodaj 1 do i [A-wysokosc prostokata]
    {
        for (int j = 0; j < B; j++) // Póki j < B wykonuj instrukcje w petli, po wykonaniu dodaj 1 do i [B - dlugosc prostakata]
        {
            std::cout << "#"; //na wyjsciu 'printuj' "X" do póki i < B, jeżeli i stanie sie wieksze lub równe B to przerwij pętle 
        }
        std::cout << std::endl;
        
    }
    

}