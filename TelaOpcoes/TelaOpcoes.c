#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ImprimiOpcoes(){

    system("CLS");
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

//***************************************************************************
void Somatoria(){

    system("CLS");

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

    printf("Somatória é: %d", soma);
    printf("\n");
    system("PAUSE");
}
//***************************************************************************
void ProgressaoGeometrica(){

    system("CLS");

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
    printf("\n");
    system("PAUSE");
}
//***************************************************************************
void ProgressaoAritmetica(){

    system("CLS");

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
    printf("\n");
    system("PAUSE");
}
//***************************************************************************
void AreaQuadilatero(){
    system("CLS");

    int base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("\n");
    printf("Digite o valor da altura: ");
    scanf("%d", &altura);
    printf("\n");

    area = base * altura;

    printf("Área do quadrilareto é: %d", area);
    printf("\n");
    system("PAUSE");

}
//***************************************************************************

int main(int args, char * arg[]){

    int opcao;

    setlocale(LC_ALL, "Portuguese");


    do{
            printf("\n");

            ImprimiOpcoes();

            printf("\tEscolha uma opção: ");
            scanf("%d", &opcao);

            switch(opcao){
            case 1:
                Somatoria();
                break;
            case 2:
                ProgressaoAritmetica();
                break;
            case 3:
                ProgressaoGeometrica();
                break;
            case 4:
                printf("Escolha 4");
                printf("\n");
                system("PAUSE");
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
                AreaQuadilatero();
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
                printf("\n\n");
                printf("Nada foi escolhido");
                break;
            }

    }while(opcao != 0);


    printf("\n");


    return 0;
}

