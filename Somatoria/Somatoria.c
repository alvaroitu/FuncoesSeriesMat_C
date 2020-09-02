#include <stdio.h>
#include <stdlib.h>

void Somatoria(){

    int nelementos, i;
    int soma = 0;

    printf("Digite o numero de elementos do vetor que deseja gerar a somatoria: ");
    scanf("%d", &nelementos);

    int vetor[nelementos];

    for(i = 0; i<nelementos; i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    printf("somatoria eh: %d", soma);

}

int main(int args, char * arg[]){

    Somatoria();
    return 0;
}
