#include <stdio.h>

int main(){

    int *Ptr; // Declara un entero a un entero.
    int Dato = 30; // Declara una variable entera y le asigna 30 directamente.
    printf("Valor de Dato antes :%d \n",Dato);
    Ptr = &Dato; // Asigna la direccion de momoria de la variable "Dato" al puntero Prt.
    *Ptr = 50; // chanka el valor referenciado 30 por 50;

    printf("Valor de Datos despues : %d \n", Dato); // imprime 50
    return 0;
}