#include <stdio.h>

int main() {

    int *DatoPrt;  // Declara un puntero a un entero
    int Dato;     // Declara una variable entera

    Dato = 5;     // Asigna el valor (5) directamente a la variable

    DatoPrt = &Dato;  // Asigna la dirección de memoria de la variable "Dato" al puntero

    printf("El valor de Dato es: %d\n", Dato);      // Imprime el valor de la variable "Dato"
    printf("La dirección de Dato es: %p\n", &Dato);  // Imprime la dirección de memoria de la variable "Dato"
    printf("El valor al que apunta DatoPrt es: %d\n", *DatoPrt);  // Imprime el valor al que apunta el puntero "DatoPrt"
    printf("La dirección almacenada en DatoPrt es: %p\n", DatoPrt);  // Imprime la dirección almacenada en el puntero "DatoPrt"

    return 0;
}
