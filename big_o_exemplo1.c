#include <stdio.h> //Incuindo valores do O de N

int maiorElemento(int v[], int n) {
    int maior = v[0]; // O(1)

    for (int i = 1; i < n; i++) { //O(1) + O(N-1) + O(N-1)
        if (v[i] > maior) { //O(N-1)
            maior = v[i]; // O(1)
        }
    }

    return maior;  //O(1)
}

// A complexidade total do algoritmo de O(N) vem a ser 3N + 1, O(1) + O(N-1) + O(N-1) + O(1) + O(1) = 3N + 1


int main(void) {
    int vetor[] = {10, 25, 8, 40, 32, 70, 15}; // 7 elementos no vetor dará O(7)
    int n = sizeof(vetor) / sizeof(vetor[0]); //Sizeof (tamanho do vetror em bytes); sizeof do vetor é igaul a 28 e do vetor[0] é igual a 4, logo 28/4 = 7 elementos no vetor
//Por ser uma equação simples o valor de O(1)

    int maior = maiorElemento(vetor, n); //Por chamar uma função o valor é O(1) + 3N + 1 = O(3N +2)

    printf("Maior elemento: %d\n", maior); //O valor do print é O(1)

    return 0; //O(1)
}                              //Somando todos os valores complexos será, 3N +12, simplificando, 3(N +4), C = 3 G(N) = N + 4