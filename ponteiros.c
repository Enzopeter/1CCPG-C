#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int rm;
    char nome[50];
    float media;
}aluno;

void atualizarNota(aluno* aluno, float valor){
    if(valor >= 0 && valor <= 10){
        aluno -> media = valor;
    }else{
        printf('Nota inexistente\n');

    }
}

int main () {

    aluno a1 = {123, "Ana", 9.0};
    aluno* ptr = &a1;

    printf('%p\n', ptr->rm); //print do endereço de memória
    printf('%p\n', ptr->nome);
    printf('%p\n', (*ptr).media);

    ptr -> rm = 234;
    printf('%d\n', ptr->rm);

    printf("A nota atual é: %f\n", a1.media);
    atualizarNota(&a1, 8);
    printf("A nova atualizada é: %f\n", a1.media);
    
    return 0;
}