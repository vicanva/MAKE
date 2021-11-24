#include <stdio.h>

int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int multiplica(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}

int mayor(int a, int b)
{
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int a=10;
    int b=5;

    printf("La suma de %d y %d és %d\n", a, b, suma(a,b));
    printf("La resta entre %d y %d és %d\n", a, b, resta(a,b));
    printf("La multiplicación de %d y %d és %d\n", a, b, multiplica(a,b));
    printf("La división entre %d y %d és %d\n", a, b, divide(a,b));
    printf("El mayor entre %d y %d és %d\n", a, b, mayor(a,b));
}
