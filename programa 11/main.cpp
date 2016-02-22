#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


/*Generar 10 numeros aleatorios, presentarlos en la pantalla,
al final presental el numero mayor y el promedio de los 10 numeros.
Generar los numeros entre 30-80*/


int main()

{   srand(time(0));
    int x;
    int numero;
    int mayor;
    int promedio;

   for (x=1; x<=10; x++)
   {
        numero = 30 + rand() % (80-30);
        cout<<"\nValor de la x es"<<x<<" "
        <<"\nValor del numero"<<numero<<"\n"
   }

   if (numero<mayor)
    {
        numero= mayor;
    }
    else
    {
        mayor=mayor;
    }

    p


    system("PAUSE");
    return 0;
}
