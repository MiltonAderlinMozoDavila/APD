#include <stdio.h>

// --- Prototiopo de la funcion hm
void hm(int, int* ,int*);


int main(){
    //  --- Declara variables
    int mnts, Horas, Minutos;

    //  --- Leer tiempo en minutos
    printf("Ingrese tiempo en minutos : ");
    scanf("%d", &mnts);

    //  --- Realizar la conversion a horas y minutos
    hm(mnts, &Horas, &Minutos);

    // --- validaciones
    printf("Resultado de la convesion : %dhrs , %dmts \n", Horas,Minutos);
    printf("Minutos : %d m > 60 \n",Minutos);
    printf("Tiempo en minutos: %d mnts = %d mnts (60*Horas+Minutos) \n",mnts, 60*Horas+Minutos);

    return 0;
}

//  --- implementacion de la funcion hm convierte minutos a horas y minutos
void hm(int mnts, int *Hora, int *Minuto){
    //  Obtener las horas
    *Hora = mnts / 60;
    *Minuto = mnts % 60;

}