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
 int a = 1;
 auto b = ask_user_for_integer("Podaj liczbę: ");
 for (auto i = 1; i <= b; i++) 
  {
   a = a*i;
  }
 std::cout << "Silnia liczby " <<b<< " wynosi: " <<a<< std::endl;
 return 0;
}
