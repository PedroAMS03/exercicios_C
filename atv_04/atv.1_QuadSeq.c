#include <stdio.h>
#include <stdlib.h>//necessario para system("cls") = limpar terminal

int main(){
   
    system("cls");

   int x;
    
    do{
        printf("Digite um numero para ser elevado ao quadrado: ");
        scanf("%d", &x);
        
        if(x != 0){
            printf("\n%d elevado ao quadrado = %d \n\n", x, x * x);
        }
    }while(x != 0);

    return 0;
}