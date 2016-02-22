#include <iostream>

using namespace std;
 /*, Ingresar un numero y determinar su rango 1-50, 51-100, y mayor a 100*/
int numero;
int main()

{
    cout <<"Ingresar un numero";
    cin>>numero;

    if ((numero>=1)and (numero<=50))
    {
        cout<<"Numero esta entre 1-50";
    }
    else if ((numero>=51)and (numero<=100))
    {
        cout<<"Numero esta entre 51-100";
    }
    else if(numero>100)
    {
        cout<<"Numero es mayor a 100";
    }
    else
    {
        cout<<"Numero es negativo";
    }
    return 0;
}
