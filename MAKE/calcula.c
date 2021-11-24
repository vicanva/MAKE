#include <stdio.h>
#include "calc.h"

int main(){
    int a, b;
    printf("Introduce los 2 operandos: ");
    scanf("%d %d", &a,&b);
    printf("La suma de %d y %d és %d\n", a, b, suma(a,b));
    printf("La resta entre %d y %d és %d\n", a, b, resta(a,b));
    printf("La multiplicación de %d y %d és %d\n", a, b, multiplica(a,b));
    printf("La división entre %d y %d és %d\n", a, b, divide(a,b));
    printf("El mayor entre %d y %d és %d\n", a, b, mayor(a,b));
    return 0;
}

