#include <stdio.h>

int somaMatriz(int matriz[][3], int n) { 
    int soma = 0; //O(1)

    for (int i = 0; i < n; i++) { //O(1) + O(N) + O(N)  // O(2N+1) // for dentro de for se faz vezes antes da conta princial 
        for (int j = 0; j < n; j++) { //O(1) + O(N) + O(N) //O(2N+2) será 2 por conta de que de que á soma dentro dele 
            soma += matriz[i][j]; //Por ja ter a interação e estar somando sera O(1)
        }
    }

    return soma; //O(1)
}

// A soma da complexidade total é O(1) + 4N² + 6N + 4 + O(1) + O(1) = 

int main(void) {
    int matriz[3][3] = { //Valor da matriz será O(9)
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //O(1) pelo int ; a soma da matriz da 4N² + 6N + 4 então será O(4N² + 6N + 4) + O(1) = 4N² + 6N + 5
    int resultado = somaMatriz(matriz, 3);

    printf("Soma = %d\n", resultado); //O(1)

    return 0; //O(1)
}