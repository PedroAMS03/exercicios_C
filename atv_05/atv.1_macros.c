#include <stdio.h>
#include <stdlib.h>
#include "macros.h" //usando as mesmas macros definidas abaixo em um include

/*#define soma(x,y) ((x)+(y))
#define max(x,y) ((x)>(y)? (x) : (y)) 
#define abs(n) ((n)<0? -(n) : (n))*/

int main(){

    system("cls");

    int n1 = -7, n2 =  8;

    printf("Soma: %d", soma(2*3, 1 + 3));
    printf("\nMaximo: %d", max(n1, n2));
    printf("\nAbsoluto: %d\n\n", abs(n1));

    return 0;
}