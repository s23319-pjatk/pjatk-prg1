#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
   if (not prompt.empty())
      {
       std::cout << prompt;
      }
      auto value = std::string{};
      std::getline(std::cin, value);
      return std::stoi(value);
}
auto main()-> int
 { 
  auto a = ask_user_for_integer("a = ");
  auto b = ask_user_for_integer("b = ");
  auto s = ask_user_for_integer("s = ");
     if(s==0)
     {
     std::cout << " nie dzielimy przez 0! " << std::endl;
     return 1;
     }
  for (auto i = a; i < b; i = (i+s))
  {
    std::cout << i << std::endl;
  }
return 0; 
}
