#include <stdio.h>

int main() {
    float notas[] = {0, 0}, soma;
    int quantidade_notas;

    printf("Digite a quantidade de notas que deseja lançar: ");
    scanf("%d", &quantidade_notas);

    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite sua nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];

    }

    printf("\n");
    printf("Tamanho do vetor: %d", sizeof(notas) / sizeof(notas[0]));

    printf("\n");
    printf("A media das notas é: %.2f", soma / quantidade_notas);


    return 0;
}