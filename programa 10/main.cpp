#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(0));
    int i;
    int n,numero;

    cout<<"Ingresar numero de veces del ciclo...:";
    cin>>n;

    for(i=1; i<=n; i++)

    {   numero = 1 + rand() % (100-50);
        cout<<"\nValor de la i es"<<i<<" "
        <<"\nValor del Numero"<<numero<<"\n";
    }



    system("PAUSE");
    return 0;
}

