#include <iostream>

using namespace std;
/*Presentar los numero del 1 al 10 usando while*/


int main()

{
    int c=0; int numero; int suma=0; int mayor; int promedio;

while (c<5)
{
  c++;
  cout<<"Numero #"<< c<<"\n";
  cin>> numero;
  suma+= numero;
  if (numero>mayor)

  {
      mayor=numero;
  }
  else
  {
      mayor=mayor;
  }
      promedio= suma/5;

 }
  cout<< "Suma de los numeros es"<<suma<<"\n";
  cout<<"El numero mayor es"<<mayor<<"\n";
  cout<<"El promedio es"<<promedio<<"\n";
  cout<<"Final del ciclo";

  return 0;

  }




