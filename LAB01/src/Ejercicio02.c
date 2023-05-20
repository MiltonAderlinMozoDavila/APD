// PROGRAMA QUE ORDENA 2 NUMERO ENTEROS
// Milton Aderlin Mozo Davila

#include <stdio.h>

// --- Prototio de la funcion intercambiar 2 numeros.
void Intercambiar(int *, int *);

// --- Prototipo de la funcion Ordenar.
void Ordenar(int *, int*);


int main(){
    // --- Declarar 2 numeros enteros
    int NroA, NroB;

    // --- Leer numeros
    printf("Ingrese el primer numero : ");
    scanf("%d",&NroA);

    printf("Ingrese segundo numero : ");
    scanf("%d",&NroB);

    // --- Mostrar los numeros
    printf(" >>> Los numeros ANTES de ser ORDANADOS son: NroA = %d y NroB = %d \n  ",NroA, NroB);

    // --- Ordenar numeros
    Ordenar(&NroA, &NroB);
    
    // --- Mostrar los numeros
    printf(" >>> Los numeros  ORDANADOS son : NroA = %d y NroB = %d \n ",NroA, NroB);


    return 0;
}
// --- Implentacion de la funcion Ordenar
void Ordenar(int *NroA, int *NroB){
    if(*NroA > *NroB)
        Intercambiar(NroA,NroB);
}

// --- Implementacion de la funcion Intercambiar
void Intercambiar(int *NroA, int *NroB){
    int Temporal = *NroA;
    *NroA = *NroB;
    *NroB = Temporal;
}