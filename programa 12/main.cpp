#include <iostream>

using namespace std;
/*Ingresar un numero entero
y finalizar cuando numero sea negativo*/

int main()
{   int numero;
    do
    {
        cout<<"Ingresar el numero";
        cin>>numero;
    }
    while (numero>0);

    return 0;
}
