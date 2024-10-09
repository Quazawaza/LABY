#include <iostream>

int main()
{
    int A,B;
    std::cin >> A >> B;

    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j < B; j++)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
        
    }
    

}