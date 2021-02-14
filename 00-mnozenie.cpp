#include <iostream>

using namespace std;

int main ()
{
    int test,iloscliczb,liczba,suma=0;

    cin >> test;
    while(test)
   
    {

       cin>> iloscliczb;
       while(iloscliczb)
       { 
         suma=0;
         cin>> liczba;
         suma= suma +liczba;
   
         iloscliczb--;
        }
      cout <<suma<<endl;
      test--;
     }
   cout <<suma<<endl;
   test--;
  }
 return 0;
}
