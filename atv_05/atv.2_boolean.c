#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

int main(){

    system("cls");

    printf("%s", bool(not false));
    printf("\n%s", bool(false and true));
    printf("\n%s", bool(true or false));
    
    return 0;
}