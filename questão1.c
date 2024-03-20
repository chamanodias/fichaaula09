#include <stdio.h>
int main(){
    int vetor[10];
    int valor;
    int maior;
    int i;
    for(i = 0; i<10; i++){
    printf("Digite o valor do vetor de posição %d\n", i + 1);
    scanf("%d", &valor);
    vetor[i] = valor;
    }
    maior = vetor[0];

    for(i=1; i<10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("O maior valor dos vetores é: %d\n", maior);
    


}