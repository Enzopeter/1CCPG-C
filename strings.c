#include <stdio.h>
#include <string.h>

int main(){

    char username[20];
    char padrao[20] = "admin";
    printf("Usuario: ");
    fgets(username, 20, stdin);
    printf("%s", username);
    printf("%d e %d\n", strlen(username), strlen(padrao));

    return 0;
}


    //char valor = 'C';
    //char palavra[5] = {'C', 'A', 'S', 'A',};
    //printf("%c", valor);
    //printf("%s", palavra);
    
    //char nome[20]; // = " Enzo Peter ";
    //printf("Digite seu nome: ");
    //scanf("%s", nome);
    //printf("Meu nome é: %s", nome);
