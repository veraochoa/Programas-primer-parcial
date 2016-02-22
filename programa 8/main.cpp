#include <iostream>

using namespace std;
/*Ingresar la nota acumulada y examen, luego obtener la nota final y ajustarla
a 60 si se encuentra entre 57-59 a 60,
presentar la nota y el estado si es aprobado o reprobado*/

int na, ne, nf;

int main()
{
    cout <<"Ingresar nota acumulada";
    cin>>na;

    cout<<"Ingresar nota examen";
    cin>>ne;

    nf= na + ne;

    if ((nf>=51) and (nf<59))
    {
        nf= 60;
    }

    else
    {
        nf= nf;
    }
    cout<<"La nota final es"<<nf;

    if (nf>=60)
    {
        cout<< "Alumno aprobado";
    }
    else
    {
        cout<<"Alumno reprobado";
    }

     return 0;

}
