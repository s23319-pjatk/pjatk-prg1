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
auto const a = ask_user_for_integer("Podaj limit: ");
auto const b = ask_user_for_integer("Podaj dzielnik: ");
auto const suma = 0;
for(auto i = 0; i <= limit: i++)
{
 if(i % dzielnik == 0) {suuma =+ i; 
}
std::cout << "Suma liczb podzielnych wynosi: " << suma << std::endl;
return 0;
}
