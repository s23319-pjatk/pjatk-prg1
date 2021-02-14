#include <array>
#include <iostream>

auto main() -> int
{
     std::array<int, 8> tab;

     for (auto p=0; p < 8; p++) 
     {
         tab[p] = (p+1)*2;
         std::cout << tab[p] << "\n";
     }

     return 0;
}
