#include <iostream>

using namespace std;
/*Ingresar el nombre, horas y turno usando un procedimiento

turno 1-100
turno 2-200
turno 3-300 */

int horas, turno, p;
char nombre [30];


void LecturaDatos (int &horas, int &turno, char nombre [])
{
    cout<<"Nombre"<<"\n";
    cin>>nombre;
    cout<<"Horas"<<"\n";
    cin>>horas;
    cout<<"Turno"<<"\n";
    cin>>turno;
}

int pago (int horas, int turno)
{
    int pago;
    if(turno==1)
    {
        pago=horas*100;
    }
    else if (turno==2)
    {
        pago=horas*120;
    }
    else if (turno==3)
    {
        pago=horas*150;
    }
    else
    {
        pago=0;
    }
    return pago;
}

int main()
{
    LecturaDatos(horas,turno,nombre);
    p= pago(horas,turno);
    cout<<"El pago es..."<<p<<"\n";

    return 0;
}
