#include <stdio.h>

int main() {
    // Exemplo de vetor
    int vetor[5]; 
    // Preenchendo o vetor com valores de 1 a 5
    for (int i = 0; i < 5; i++) {
        vetor[i] = i + 1;
    }

    // Mostrando o vetor
    printf("Vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    // Exemplo de matriz
    int matriz[3][3];

    // Preenchendo a matriz com valores (linha * coluna)
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            matriz[l][c] = (l + 1) * (c + 1);
        }
    }

    // Mostrando a matriz
    printf("Matriz:\n");
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}