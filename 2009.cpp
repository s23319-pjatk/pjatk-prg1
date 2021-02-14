#include  <iostream>
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
 auto b=ask_user_for_integer("Podaj liczbę: ");
 auto i=1;
 auto a=1;
 while (i<=b) 
  {
   a=a*i;
   ++i;
  }
 std:: cout << "Silnia liczby " <<b<<" to: " <<a<< std::endl;
 return 0;
}
