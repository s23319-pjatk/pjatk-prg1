#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
 if(not prompt.empty()) {
    std::cout << prompt;
    }
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}
auto main() -> int { 
    auto const a = ask_user_for_integer("a = ");
    auto const b = ask_user_for_integer("b = ");
    if (a>=b){
    std::cout << "liczba większa = " << a << "\n";
    }
 

   else {
   std::cout << "liczba większa = " << b << "\n";
   }
 return 0;
}
