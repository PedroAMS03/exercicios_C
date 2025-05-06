#include <stdio.h>
#include <stdlib.h>

double pot(double a,  int b) {
    
    if (b == 0) return 1.0;
    
    return a * pot(a, b - 1);
}

int main() {

    system("cls");

    double a;
    unsigned int b;

    printf("\nDigite a e b:");
    scanf("%lf %u", &a, &b);

    printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a, b));
    
    return 0;
}