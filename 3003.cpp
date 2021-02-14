#include <iostream>
#include <string>

auto asum(int a[], int n) -> void
{
 for (auto i=0; i<n; i++)
 {
  std::cout << a[i]<< " ";
  }
 std::cout << std::endl;
}
int main ()
{ 
 const int n = 8;
 int a[n]= {15 , 3 , 99 , 0 , 23 , 1 ,-2 , 105};
 asum(a, n);
 return 0;
}
