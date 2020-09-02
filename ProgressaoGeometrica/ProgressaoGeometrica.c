#include <stdio.h>
#include <stdlib.h>

void PulaLinha(){
    printf("\n");
}

void ProgressaoGeometrica(){
    int nInicial, razao, nElementos, elemento;

    printf("Digite o numero inicial da sua progressao geometrica: ");
    scanf("%d", &nInicial);
    printf("\nDigite a razao da sua progressao geometrica: ");
    scanf("%d", &razao);
    printf("\nDigite o numero de elementos da progressao geometrica: ");
    scanf("%d", &nElementos);

    elemento = nInicial;

    for(int i = 0; i<nElementos; i++){
        printf("\n%d", elemento);
        elemento = elemento*razao;
    }
    PulaLinha();
    system("\nPAUSE");

}

int main(int args, char * arg[])
{
    ProgressaoGeometrica();
    return 0;
}


