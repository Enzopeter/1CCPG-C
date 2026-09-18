#include<stdio.h>
int main(){
    float nota_1, nota_2;
    int presenca;

    printf("CALCULADORA DE MEDIA DO ALUNO\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite sua segunda nota:");
    scanf("%f", &nota_2);
    printf("Media de precenca do aluno de 0 a 100: ");
    scanf("%d", &presenca);

    float media = (nota_1 + nota_2) / 2;
    printf("A media do aluno é: %f", media);

    if(media >= 6 && presenca >= 75){
        printf("Aprovado");
    }else if(media >= 4 && presenca >=75){
        printf("Recuperacao");
    }else if (media >= 6 && presenca <75){
        printf("Reprovado por falta");
    }else{  
        printf("Reprovado");
    }


    return 0;
} 