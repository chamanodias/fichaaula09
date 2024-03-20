#include <stdio.h>
int main(){
    int vetor[5];
    int i;
    int valor;
    int menor, maior, posicao_maior, posicao_menor;
    for(i = 0; i<5; i++){
        printf("Digite o valor do vetor de posição %d\n", i + 1);
        scanf("%d", &valor);
        vetor[i] = valor;
    }
    maior = vetor[0];
    menor = vetor[0];
    posicao_maior = 0;
    posicao_menor = 0;

    for(i = 0; i<5; i++){
        if (vetor[i]>maior){
            maior = vetor[i];
            posicao_maior = i;
        }
    }
    for(i = 0; i<5; i++){
        if (vetor[i]<menor){
            menor = vetor[i];
            posicao_menor = i;
        }
    }
    printf("O maior valor do vetor é %d, e se encontra na posição %d\n", maior, posicao_maior + 1);
    printf("O menor valor do vetor é %d, e se encontra na posição %d\n", menor, posicao_menor + 1);

}