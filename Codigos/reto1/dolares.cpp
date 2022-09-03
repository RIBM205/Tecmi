#include <stdio.h>
#include <stdlib.h>

main()
{
int a = 0;
int b = 0; 
int c = 0;
printf("ingrese el precio de la moneda");
scanf("%d",&a);
printf("ingrese la cantidad de dinero que desea convertir");
scanf("%d",&b);
c = a*b;
printf("el resultado es %d",c);
}