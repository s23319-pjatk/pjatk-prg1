#include <iostream>
#include <string>

auto iota(int a[], int n, int start) -> void
{
 start = 4;
 a[n]  = {start};
 for (auto i=0; i<n; i++)
 {
  std::cout<<start++<< " " ;
 }
 std::cout << std::endl;
}
int main ()
{ 
 int start = 5;
 const int n = 17;
 int a[n]= {};
 iota(a, n, start);
 return 0;
}
