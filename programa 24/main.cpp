#include <iostream>

using namespace std;

char nombre [20];
int turno;
double ventas, porcomi, comision;

 void LecutraDatos (int & turno, double & ventas, char nombre[])
{
    cout<<"Escriba su nombre"<<"\n";
    cin>>nombre;

    do
    {
        cout<<"Escriba turno 1,2 o 3"<<"\n";
        cin>>turno;
    }
    while (! (turno==1 or turno==2 or turno==3));

    cout<<"Numero de ventas"<<"\n";
    cin>>ventas;

}


   double pcomi(int turno)
{
    if (turno==1)
    {
        return 0.05;
    }
    else if(turno==2)
    {
        return 0.06;
    }
    else (turno==3)
    {
        return 0.04;
    }
}

void calcular (int turno, double ventas, double &comision, double &porcomi)
{
    porcomi = pcomi(turno);
    comision= ventas % porcomi;
}


int main()
{
   LecutraDatos (turno,ventas,nombre);
   comi(turno);
   calcular (turno,venta,comision);
   cout<<"El pago por comision es"<<porcomi<<"\n";
   count<<"Comision total es"<<comision<<"\n";

    return 0;
}
