#include <iostream>

using namespace std;

/*Ingresar 5 numeros usando el ciclo while, luego deber contar los numeros que estan en los rangos de:
 1-50, 51-100, 101.
 Obtener el promedio de los rangos , el numero mayor y menor de todos los numeros.*/

int main()
{
  int numero; int c=0; int c1=0; int c2=0; int c3=0; int c4=0;
  int promedioR1; int promedioR2; int promedioR3;
  int mayor; int menor;


    while (c<5)
{
      c++;
      cout<<"Ingresar numero"<<c<<"\n";
      cin>>numero;


    if ((numero<=1)and(numero<=50))
    {
        c1++;
        promedioR1 = promedioR1 + numero;

    }
    else if ((numero<=51) and (numero<=100))
    {
        c2++;
        promedioR2 = promedioR2 + numero;
    }
    else if (numero<=101)
    {
        c3++;
        promedioR3 = promedioR3 + numero;
    }
     else
    {
         c4++;

    }

    if (numero>mayor)
     {
        mayor= numero;
        cout<<"El numero mayor es"<<mayor;
     }
    if (numero>menor)
     {
        menor= numero;
        cout<<"El numero menor es"<<menor;
     }
}
     promedioR1= promedioR1/c1;
     promedioR2= promedioR2/c2;
     promedioR3= promedioR3/c3;


      cout<<"Rango entre 1-50:"<<c1<<"\n";
      cout<<"Rango entre 51-100:"<<c2<<"\n";
      cout<<"Rango de 101 para arriba"<<c3<<"\n";
      cout<<"Numeros negativos"<<c4<<"\n";
      cout<<"EL Promedio del primer rango es"<<promedioR1;
      cout<<"El promedio del segundo rango es"<<promedioR2;
      cout<<"El promedio del tercer rango es"<<promedioR3;

    return 0;
}

