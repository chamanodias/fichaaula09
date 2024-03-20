#include <stdio.h>
int main(){
    int vetor[10];
    int valor;
    int menor;
    int i;
    for(i = 0; i<10; i++){
    printf("Digite o valor do vetor de posição %d\n", i + 1);
    scanf("%d", &valor);
    vetor[i] = valor;
    }
    menor = vetor[0];

    for(i=1; i<10; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("O menor valor dos vetores é: %d\n", menor);
    


}