#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    for(i = 0; i < 10; i++) {
        printf("Digite o valor do vetor de posição %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Valores iguais:\n");
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                printf("%d e %d\n", vetor[i], vetor[j]);
            }
        }
    }
}
