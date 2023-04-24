#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ImprimiOpcoes(){

    system("CLS");
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

    printf("Somat�ria �: %d", soma);
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

    printf("�rea do quadrilareto �: %d", area);
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

            printf("\tEscolha uma op��o: ");
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

