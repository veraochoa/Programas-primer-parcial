#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
  int tabla;
  int resp;
  int i;
do
{
  do
  {
  cout<<"Tabla de multiplicar...";
  cin>>tabla;
  } while (!(tabla>=5) and (tabla<=10));


  for(i=1;i<=10;i++)
  {
      resp= tabla * i;
      cout<<i<<"X"<<tabla<<"="<<resp<<"\n";
  }
  do
  {
      cout<<"Desea continuar"<<"\n";
      cin>>resp;

  } while ((toupper(resp)!='S') and (toupper(resp) !='N'));
  } while (toupper(resp)=='S');

return 0;
}

