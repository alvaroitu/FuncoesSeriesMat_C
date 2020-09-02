#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ImprimiOpcoes(){

    printf("\tProjeto sobre s�ries e fun��es matem�ticas\n\n");
    printf("\tEscolha o que gostaria de fazer.\n\n");
    printf("\tOp��o 01 - Somat�ria.\n");
    printf("\tOp��o 02 - Progress�o Aritm�tica.\n");
    printf("\tOp��o 03 - Progress�o Geom�trica.\n");
    printf("\tOp��o 04 - Fatorial.\n");
    printf("\tOp��o 05 - Sequ�ncia de Fibonacci.\n");
    printf("\tOp��o 06 - Ordenar Crescente.\n");
    printf("\tOp��o 07 - Ordenar Decrescente.\n");
    printf("\tOp��o 08 - Equa��o do Segundo Grau.\n");
    printf("\tOp��o 09 - �rea Quadril�tero.\n");
    printf("\tOp��o 10 - �rea Triangulo.\n");
    printf("\tOp��o 11 - Per�metro Circunfer�ncia.\n");
    printf("\tOp��o 12 - �rea C�rculo\n");
    printf("\tOp��o 13 - Regra de 3.\n\n");

}

int main(int args, char * arg[]){

    int opcao;

    setlocale(LC_ALL, "Portuguese");

    printf("\n");

    ImprimiOpcoes();

    printf("\tEscolha uma op��o: ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("Escolha 1");
        break;
    case 2:
        printf("Escolha 2");
        break;
    case 3:
        printf("Escolha 3");
        break;
    case 4:
        printf("Escolha 4");
        break;
    case 5:
        printf("Escolha 5");
        break;
    case 6:
        printf("Escolha 6");
        break;
    case 7:
        printf("Escolha 7");
        break;
    case 8:
        printf("Escolha 8");
        break;
    case 9:
        printf("Escolha 9");
        break;
    case 10:
        printf("Escolha 10");
        break;
    case 11:
        printf("Escolha 11");
        break;
    case 12:
        printf("Escolha 12");
        break;
    case 13:
        printf("Escolha 13");
        break;

    default:
        printf("Nada foi escolhido");
        break;
    }

    system("PAUSE");
    return 0;
}

