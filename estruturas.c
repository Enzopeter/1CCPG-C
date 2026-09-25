#include <stdio.h>
#include <stdlib.h> //malloc (memory allocation)

struct node {
    int dado;
    struct node *proximo;
};

void inserirInicio(struct node** head, int valor){
    struct node* novo = malloc(sizeof(struct node);
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo; 
}

void inmprimirlista(struct node* head){
    struct node* atual = head;
    while (atual != NULL){ //Comparando com a atual, Não igual.
        printf('%d ->', atual->dado);
        atual = atual->proximo;
    }
    printf('NULL\n');

}

struct node* buscar(struct node* head, int alvo){
    struct node* atual = head;
    while (atual != NULL){
        if (atual->dado == alvo)return atual; 
        atual = atual->proximo;
    }
    return NULL;
}

int main (){
    struct node* No //Declaração do No da lista ligada

    No = (struct node*) malloc(sizeof(struct node)); //Alocação de memória para o No

    printf('%d\n', No->dado);
    No->dado = 10;
    No->proximo = NULL; //Sem o Null o programa trava
    printf('%d\n', No->dado);
    if(No == NULL ){
        printf('Erro: Memória insuficiente!\n');
        exit(1);
    }

    inserirInicio(&No, 5);
    printf('%d\n', No->dado);
    printf('%d-> %d -> NULL', No->dado, No->proximo->dado);  

    inserirInicio(&No, 30);
    inserirInicio(&No, 67);
    inserirInicio(&No, 24);

    imprimirlista(No);

    struct node* novoNo;
    int alvo = 67;
    novoNo = buscar(No, alvo);
    if (novoNo == NULL){
        printf('Erro: memória insuficiente!\n');
        exit(1);
    }
    printf('O valor %d foi encontrado na lista.\n', novoNo->dado);
    }

    return 1;
};