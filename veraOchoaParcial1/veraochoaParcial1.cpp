#include <iostream>

using namespace std;

int hora, xhoras, turno, pago, pagox;
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

    cout<<"Ingrese horas extras"<<"\n";
    cin>>xhoras;
}


int pnormal (int turno, int hora)

{
    if (turno==1 or turno==3)
    {
        pago= hora*200;
    }
    else if (turno==2 or turno==4)
    {
        pago = hora*300;
    }

}

  int pextra (int turno, int xhoras)
{
    if (turno==1 or turno==3)
    {
        pagox= xhoras *250;
    }
    else if (turno==2 or turno==4)
    {
        pagox= xhoras *350;
    }
}


int main()
{
    Planilla(turno,hora,nombre);
    pnormal(turno,hora);
    pextra(turno,hora);

    cout<<"Pago por horas trabajadas"<<pago<<"\n";
    cout<<"Pago por horas extras"<<pagox<<"\n";

    return 0;
}
