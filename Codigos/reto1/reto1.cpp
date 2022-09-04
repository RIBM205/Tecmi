#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <thread>
using namespace std;


bool datos = 1;
long marca[100000];
int antiguedad;
int precio;


void DoInicio(){

	printf("ingrese la marca del auto: ");
	scanf("%s",&marca);
	printf("introdusca el modelo de su auto siguiendo el siguiente formato '20xx'':");
	scanf("%d",&antiguedad);
	printf("ingrese el precio de compra de su auto:");
	scanf("%d",&precio);	
	printf("la marca de su auto es: %s \n",marca);
	printf("el modelo de su auto es: %d \n",antiguedad);
	printf("el precio de su auto es %d \n",precio);
	printf("los datos son correctos? si = 1, no = 0 \n");
	scanf("%d",datos);
}
void DoCalculos(){
	double depreciacion;
	double depreciacion1 = 0.0;
	double depreciacion2;
	double total;
	double d = 0.20;
	double anual =  0.08;
	double actual;
	double temporal;
	depreciacion = precio * d;
	temporal = precio - depreciacion;
	depreciacion1 = temporal * anual;
	temporal = temporal - depreciacion1;
	depreciacion2 = temporal * anual;
	total = depreciacion1 + depreciacion2 + depreciacion;
	actual = precio - total;
	printf("la marca de su auto es: %s \n",marca);
	printf("el modelo de su auto es %d \n",antiguedad);
	printf("el precio de su auto es %d \n",precio);
	printf("la depreciacion al salir de la agencia fue:: %f  \n",depreciacion);
	printf("su auto se devaluo el primero: %f  \n",depreciacion1);
	printf("el segundo: %f  \n",depreciacion2);
	printf("la devaluacion total fue: %f  \n",total);
	printf("su precio actual es: %f  \n",actual);

	
}
void DoTrabajo(){
	std::thread inicio(DoInicio);
	inicio.join();
}


main(){	
DoInicio();
if(datos == 1){
	std::thread calculos(DoCalculos);
	calculos.join();


}
else{
	std::thread inicio(DoInicio);
	inicio.join();
	
	}
}
