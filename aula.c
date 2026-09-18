#include<stdio.h>

int main () {
    int valor_1 = 10;
    float valor2 = 3;

    printf("O resultado da some é: %.2f\n", valor_1 + valor2);
    printf("O resultado da subtração é: %f\n", valor_1 - valor2);
    printf("O resultado da multiplicação é: %f\n", valor_1 * valor2);
    printf("O resultado da divisão é: %f\n", valor_1 / valor2);
    printf("O resto da divisao é:%d\n", valor_1 % (int)valor2);

    return 0;

}