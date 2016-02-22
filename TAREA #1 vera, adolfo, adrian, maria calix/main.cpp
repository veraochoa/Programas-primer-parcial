#include <iostream>

using namespace std;

/* Ingresar 10 numeros y contar cuantos numeros estan en las siguientes ramas:
1-50, 51-80, >80 */

int numero, c = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, mayor = 0;

int main()
{
    while (c<10)
    {
        c++;
        cout<<"Ingresar un numero\n";
        cin>>numero;

        if (numero>=1 and numero<=50)
        {
            c1++;
        }
        else if (numero>=51 and numero<=80)
        {
            c2++;
        }
        else if (numero>80)
        {
            c3++;
        }
        else
        {
            c4++;
        }

        if (numero>mayor)
        {
            mayor = numero;
        }
        else
        {
            mayor = mayor;
        }
    }
    cout<<"\nNumeros entre 1-50\n"<<c1<<"\n";
    cout<<"Numeros entre 51-80\n"<<c2<<"\n";
    cout<<"Numeros mayores a 80\n"<<c3<<"\n";
    cout<<"Numeros negativos\n"<<c4<<"\n";
    cout<<"El numero mayor es\n"<<mayor<<"\n";

    return 0;
}
