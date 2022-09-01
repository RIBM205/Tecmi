
#include <stdio.h>
#include <stdlib.h>
#include <string>

main(){
    string marca = "";
    string modelo = "";
    int factura = 0;
    int depreciacion = 0;
    int año1 = 0;
    int año2 = 0;
    int año3 = 0;
    int año4 = 0;
    int año5 = 0;
    
    printf("marca del automovil:");
    scanf("%24[^\n]s"&marca);
    printf("modelo del automovil:");
    scanf(%s,&modelo);
    printf("precio de fctura:"); 
    scanf(%d,&factura);
    depreciacion = factura(0.80);
    printf(depreciacion);
}
