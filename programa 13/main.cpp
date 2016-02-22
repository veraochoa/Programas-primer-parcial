#include <iostream>

using namespace std;
/*Valida que numero esta entre 50-100*/

int main()
{ int numero;
  int x;

  for (x=1; x<=10; x++)
  {


   do
   {
       cout<<"Ingresar numero entre 50-100...";
       cin>>numero;

   }
    while ((!numero>=50) and (!numero<=100))
    cout<<x<<"Numero Correcto es"<<numero<<"\n";

  }  return 0;

}
