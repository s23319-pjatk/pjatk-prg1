#include <iostream>

auto main() -> int
{
   auto const v = 7;
   std::cout << v << "\n";
   auto x = v;
   while(x == -2)
   {
       --x;
       std::cout << v << "\n";
   }

   return 0;
}
