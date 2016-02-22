#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*Ingresar dos numeros y determinar cual es el numero mayor*/

int main()
{ int x,y;
 printf("Ingresar primer numero");

 scanf("%d", &x);

 printf("Ingresar segundo numero");

 scanf("%d", &y);

 if (x>y)
 {
     printf("Numero mayor es x");
 }
 else
 {
     printf("Numero mayor es y");
 }
  system("PAUSE");
  return 0;

 }



