#include <stdio.h>

//--- Prototipo de la funcion cuadrado
void Cuadrado(int *);

int main() {
    int a = 5;  // Declara una variable entera "a" y le asigna el valor 5
    printf("El valor original = %d\n", a);  // Imprime el valor original de "a"

    Cuadrado(&a);  // Llama a la función Cuadrado y pasa la dirección de memoria de "a" como argumento

    printf("El Valor al cuadrado = %d\n", a);  // Imprime el valor de "a" después de ser modificado por la función

    return 0;
}

//--- Implementacion de la funcion cuadrado
void Cuadrado(int *Nro) {
    *Nro = *Nro * *Nro;  // Calcula el cuadrado del valor al que apunta "Nro" y lo asigna al mismo lugar de memoria
}
