#include <stdio.h>

//FUNCOES

/*TIPOS DE FUNÇÕES
1- nao entra nada e nao sai nada: void nome_funcao(){
    printf()
}

2- entra alguma coisa e nao sai nada: void nome_funcao(tipo_do_dado, nome_variavel, ...){}

exemplo:
void soma (int numero_1, int numero_2){
    printf("%d", numero_1 + numero_2);
}

3- entra alguma coisa e sai alguma coisa: tipo_do_dado nome_funcao(tipo_do_dado nome_variavel, ...){
    return nome_variavel ou equação
}


*/



int main() {
    /*Criar um interface com o usuario, onde terá duas opções:
    
    1- media do aluno --> media = (nota 1 + nota 2)/2 
    2- verificação de presença --> presenca >= 75% -> presença adequada
                               --> presenca < 75% -> atentar com a presença*/
    // Declaração das variaveis 
    int opcao, presenca;
    float nota_1, nota_2, media;

    //MENU  
    printf("--- MENU ---\n");
    printf("1 - CALCULADORA DE MEDIA;\n");
    printf("2 - VERIFICADOR DE PRESENCA;\n");
    printf("Selecione uma das opcoes acima: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("--- CALCULADORA DE MEDIA ---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        if (nota_1 < 11 && nota_1 >= 0 && nota_2 < 11 && nota_2 >= 0){
            media = (nota_1 + nota_2)/2;
            printf("A media do aluno e: %.2f\n", media);
        }else{
            printf("Notas invalidas. Por favor, insira notas validas (0-10).\n");
        }
        break;

        case 2:
        printf("--- VERIFICADOR DE PRESENÇA ---\n");
        printf("Digite a frequencia do aluno (0-100): ");
        scanf("%d", &presenca);
        if (presenca >= 75){
            printf("O aluno esta sem pendencia na presenca, a frequencia e de %d%%", presenca);
        }else{
            printf("O aluno esta com pendencia na presenca, a frequencia e de %d%%", presenca);
        }
        break;
        default:
        printf("Opcao invalida, por favor selecione uma opcao valida.");
        break;
    }
    return 0;
}