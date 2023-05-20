#include <stdio.h>


int main(){
    // --- Declaracion del puntero generico
    void *VoidPuntero;

    int Entero = 27;
    float Flotante = 1.69;
    char Caracter = 'M';

    //  --- Asignacion de la direccion de un entero al puntero generico.
    VoidPuntero = &Entero;
    printf("Valor entero: %d\n", *(int *)VoidPuntero);  // Conversión a int * y acceso al contenido

    VoidPuntero = &Flotante;  // Asignación de la dirección de un float al puntero genérico
    printf("Valor flotante: %f\n", *(float *)VoidPuntero);  // Conversión a float * y acceso al contenido

    VoidPuntero = &Caracter;  // Asignación de la dirección de un char al puntero genérico
    printf("Valor caracter: %c\n", *(char *)VoidPuntero);  // Conversión a char * y acceso al contenido

    /*
    En resumen, void *vptr puede almacenar la dirección de cualquier tipo de objeto, pero se necesita hacer una conversión de tipo adecuada antes de poder acceder a su contenido.
    */

    return 0;
}