#include <iostream>

using namespace std;

int hora, xhoras, turno, pago;
char nombre [30];

 void Planilla(int &turno, int &hora, char nombre [])
{
    cout<<"Escriba su nombre"<<"\n";
    cin>>nombre;

    do
    {
        cout<<"Ingrese turno trabajado"<<"\n";
        cin>>turno;
    }
    while (!(turno<=1) and (turno>=4));

    cout<<"Ingrese horas trabajadas"<<"\n";
    cin>>hora;
}

int pago (int turno, int hora)
{
    if (turno==1 and turno==3)
    {
        pago= hora*200;
    }
    else (turno==2 and turno==4)
    {
        pago= hora*300;
    }

    return pago;
}

int main()
{
    Planilla(turno,hora,nombre);
    pago(turno,hora);

    return 0;
}
