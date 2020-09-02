#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ImprimiOpcoes(){

    printf("\tProjeto sobre séries e funções matemáticas\n\n");
    printf("\tEscolha o que gostaria de fazer.\n\n");
    printf("\tOpção 01 - Somatória.\n");
    printf("\tOpção 02 - Progressão Aritmética.\n");
    printf("\tOpção 03 - Progressão Geométrica.\n");
    printf("\tOpção 04 - Fatorial.\n");
    printf("\tOpção 05 - Sequência de Fibonacci.\n");
    printf("\tOpção 06 - Ordenar Crescente.\n");
    printf("\tOpção 07 - Ordenar Decrescente.\n");
    printf("\tOpção 08 - Equação do Segundo Grau.\n");
    printf("\tOpção 09 - Área Quadrilátero.\n");
    printf("\tOpção 10 - Área Triangulo.\n");
    printf("\tOpção 11 - Perímetro Circunferência.\n");
    printf("\tOpção 12 - Área Círculo\n");
    printf("\tOpção 13 - Regra de 3.\n\n");

}

int main(int args, char * arg[]){

    int opcao;

    setlocale(LC_ALL, "Portuguese");

    printf("\n");

    ImprimiOpcoes();

    printf("\tEscolha uma opção: ");
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

