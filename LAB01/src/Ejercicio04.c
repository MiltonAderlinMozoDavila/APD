#include <stdio.h>

void swap ( int * , int *) ;
int main () {
int a = 14;
int b = 19;
swap (&a , &b ) ;
printf ( " Los valores cambiados son : %d , %d \n " , a ,b ) ;


}
void swap(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
