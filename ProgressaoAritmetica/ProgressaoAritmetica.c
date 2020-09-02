#include <stdio.h>
#include <stdlib.h>

void PulaLinha(){
    printf("\n");
}

void ProgressaoAritmetica(){
    int nInicial, razao, nElementos, elemento;

    printf("Digite o numero inicial da sua progressao aritmeica: ");
    scanf("%d", &nInicial);
    printf("\nDigite a razao da sua progressao aritmeica: ");
    scanf("%d", &razao);
    printf("\nDigite o numero de elementos da progressao aritmeica: ");
    scanf("%d", &nElementos);

    elemento = nInicial;

    for(int i = 0; i<nElementos; i++){
        printf("\n%d", elemento);
        elemento = elemento + razao;
    }
    PulaLinha();
    system("\nPAUSE");

}

int main(int args, char * arg[])
{
    ProgressaoAritmetica();
    return 0;
}

