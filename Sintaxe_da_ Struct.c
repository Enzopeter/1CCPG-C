// Definição da estrutura
struct Aluno {
    int rm;
    char nome[50];
float nota;
};  // <--- Ponto e vírgula obrigatório

// Declaração de uma variável do tipo struct
struct Aluno aluno1;

//Palavra-chave (struct) Indica ao compilador que estamos definindo um novo tipo de estrutura.

//Tag (Nome) o indentificador da estrutura (ex: Aluno, Carro, Produto).

//Membros variáveis internas de qualquer tipo, declaradas dentro das chaves.33333333333333333333333333333333

//O OPERADOR PONTO para acessar qualquer campo de uma variável do tipo struct, utilizamos o caractere ponto ( . ).

#include <stdio.h>
#include <string.h>

//typedf (unsigned int ) (uint)
typedef unsigned int uint; //semelhante ao python --> import numpy as np

// typedef int interiro;
// typedef double doisfloat;

typedef struct{
    char rua[50];
    uint numero;
    char bairro[50];
    char cidade[50];

}Endereco;

typedef struct {
    uint rm;
    char nome [50];
    float nota[2]; //typedef boletin tambem poderia ser utilizado
    Endereco endereco;
    //endereço --> rua (char[]), numero (int), bairro (char[]), cidade...
    //email, data de nascimento, turma, ...
}Aluno2;

int main() 
{
    typedef Aluno2 aluno2[3];

    aluno2[0].rm = 0;
    strcpy(aluno2[0].nome, "João Da Silva"); // strcpy é uma função que otmiiza o codigo, deixanado o vetor de caracteres mais organizado
    printf("nome completo: %s\n", aluno2[0].nome);
    aluno2[0].nota[0] = 8;
    aluno2[0].nota[1] = 10;
    
    //sizeof: ele pega o tamanho em bytes do elemento ou tipo de dado
    //int --> 4bytes / char --> 1byte
    //2 valores no vetor nota, entao 2 * 4 = 8bytes --> sizeof(aluno2[0].nota)

    printf('%d\n', sizeof(aluno2[0].nota)/sizeof(aluno2[0].nota[0]));

    int tam_vetor = sizeof(aluno2[0].nota)/sizeof(aluno2[0].nota[0]));

    float media = (aluno2[0].nota[0] + aluno2[0].nota[1]) / tam_vetor;
    
    printf('%f\n', media );

    printf('A nota do aluno: %f\n', media);

    //Exibir rua, numero - bairro, cidade
    strcpy(aluno2[0].endereco.rua, 'Clotilde galesi');
    aluno2[0].endereco.numero = 170;
    strcpy(aluno2[0].endereco.bairro, 'Centro');
    strcpy(aluno2[0].endereco.cidade, 'Osasco');

    printf('Endereço do aluno: %s, %d - %s, %s\n', aluno2[0].endereco.rua, aluno2[0].endereco.numero, aluno2[0].endereco.bairro, aluno2[0].endereco.cidade);
    
    return 0;
}