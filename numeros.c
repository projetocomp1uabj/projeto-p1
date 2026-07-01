#include <stdio.h>   
#include <string.h>  
#include <stdlib.h>  

#define max 100      
// define uma constante, o vetor terá no máximo 100 posições

int main() {
    int vetor[max];     
    int tamanho = 0;    
    int i, j, temp;     // variáveis de controle para os laços de repetição e troca de valores
    char entrada[50];  
    int continuar = 1;  // variável de controle (booleana): 1 significa "sim, continue o loop"

    printf("digite um numero inteiro por vez e aperte enter\n");
    printf("digite \"parar\" para encerrar e ordenar todos os numeros\n");

    while (tamanho < max && continuar) {
        printf("digite um numero (ou \"parar\" para parar): ");
        scanf("%s", entrada); // lê a entrada do usuário como texto (string)

        if (strcmp(entrada, "parar") == 0) {
            continuar = 0; // se for "parar", muda a variável para 0 para encerrar o loop na próxima validação
        } else {
            vetor[tamanho] = atoi(entrada); // converte o texto digitado em número inteiro e guarda no vetor
            tamanho++;                      // incrementa o tamanho, preparando a próxima posição do vetor
        }
    }

    if (tamanho == 0) {
        printf("\nnenhum numero foi digitado.\n");
        return 0;
    }

    // a partir daqui, é o próprio algoritmo em si
    // o laço externo controla quantas passagens faremos pelo vetor
    for (i = 0; i < tamanho - 1; i = i + 1) {
        // o laço interno compara os elementos vizinhos. 
        // o "- i" serve para evitar retestar os números que já subiram para o final (já ordenados)
        for (j = 0; j < tamanho - 1 - i; j = j + 1) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];         // guarda o atual temporariamente
                vetor[j] = vetor[j + 1]; // move o menor para a posição atual
                vetor[j + 1] = temp;     // coloca o maior na posição da frente (faz a troca)
            }
        }
    }

    printf("\nresultado ordenado: {");
    for (i = 0; i < tamanho; i = i + 1) {
        printf("%d", vetor[i]);
        
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("}\n"); // fecha as chaves da exibição visual

    return 0; 
}
