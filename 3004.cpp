#include <iostream>
#include <string>

auto amin(int a[], int n) -> void
{

 int min = a[0];
 for (auto i=1; i<n; i++)
 {
  if(a[i] < min) min = a[i];
  }
 std::cout << min << std::endl;
}
int main ()
{ 
 const int n = 8;
 int a[n]= {15 , 3 , -99 , 0 , 23 , 1 , 2 , 105};
 amin(a, n);
 return 0;
}
