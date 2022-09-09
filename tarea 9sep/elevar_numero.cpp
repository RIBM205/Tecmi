#include <stdio.h>
#include <stdlib.h>

int numero_elevar = 3;
int veces_elevar;
int resultado;
int marcador;


void Elevar(){
	resultado = resultado * numero_elevar;
	marcador= marcador + 1;
}

main(){
	printf("inserte el numero que desea elevar ");
	scanf("%i", &numero_elevar);
	resultado = resultado + numero_elevar;
	printf("cauntas veces desea elevar su numero ");
	scanf("%d", &veces_elevar);
	while(marcador < veces_elevar){
		Elevar();

	}
	printf("realizaco con exito!");
	printf("el resultado es %i"  ,resultado);
}
