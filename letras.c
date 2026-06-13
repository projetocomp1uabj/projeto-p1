#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main() {
    char vetor[MAX];
    char entrada[10];
    int tamanho = 0;
    int i, j;
    char k;

    printf("Digite uma letra por vez e aperte Enter\n");
    printf("Digite 'parar' para encerrar e ordenar toda as letras escritas\n");

    while (tamanho < MAX) {
        printf("Digite uma letra (ou 'parar'): ");
        scanf("%s", entrada);

        if (strcmp(entrada, "parar") == 0) {
            break;
        }

        if (strlen(entrada) != 1) {
            printf("Erro: Digite apenas UMA letra por vez, ou 'parar'.\n");
            continue;
        }

        if (!isalpha(entrada[0])) {
            printf("Erro: Entrada invalida. Digite apenas letras.\n");
            continue;
        }

        vetor[tamanho] = entrada[0];
        tamanho++;
    }

    if (tamanho == 0) {
        printf("\nNenhuma letra foi digitada.\n");
        return 0;
    }

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                k = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = k;
            }
        }
    }

    printf("\nResultado ordenado: {");
    for (i = 0; i < tamanho; i++) {
        printf("%c", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}