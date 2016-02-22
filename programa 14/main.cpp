#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char resp;
    int i, num;
do
{
   cout<<"Numero entero...>";
   cin>>num;

    do
    {
        cout<<"Desea continuar....:";
        cin.get(resp);
        _flushall();
    }
    while ((toupper(resp) !='S') and (toupper(resp) !='N'));
}
 while ((toupper(resp)== 'S'));
    return 0;
}
