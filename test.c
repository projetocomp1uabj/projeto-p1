#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//utilizei string para receber os numeros todos de uma vez 
int main() {
    char entrada[100];
    int vetor[50];
    int n = 0, i, j, temp;

    printf("Digite os numeros separados por espaco:\n");
    fgets(entrada, sizeof(entrada), stdin);

    char *token = strtok(entrada, " ");

    while (token != NULL) {
        vetor[n] = atoi(token);
        n = n + 1;
        token = strtok(NULL, " ");
    }

//algoritimo 
    for (i = 0; i < n - 1; i = i + 1 ) {
        for (j = 0; j < n - i - 1; j = j + 1 ) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nSequencia ordenada:\n");

    for (i = 0; i < n; i = i + 1 ) {
        printf("%d ", vetor[i]);
    }

    return 0;
}