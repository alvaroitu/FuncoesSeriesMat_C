#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Cabecalho(){

    printf("Projeto sobre s�ries e fun��es matem�ticas\n");
    printf("Escolha o que gostaria de fazer.\n");
    printf("Op��o 01 - Somat�ria.\n");
    printf("Op��o 02 - Progress�o Aritm�tica.\n");
    printf("Op��o 03 - Progress�o Geom�trica.\n");
    printf("Op��o 04 - Fatorial.\n");
    printf("Op��o 05 - Sequ�ncia de Fibonacci.\n");
    printf("Op��o 06 - Ordenar Crescente.\n");
    printf("Op��o 07 - Ordenar Decrescente.\n");
    printf("Op��o 08 - Equa��o do Segundo Grau.\n");
    printf("Op��o 09 - �rea Quadradro/Ret�ngulo.\n");
    printf("Op��o 10 - �rea Triangulo.\n");
    printf("Op��o 11 - Per�metro Circunfer�ncia\n");
    printf("Op��o 12 - �rea C�rculo\n");

}

void ImprimiOpcoes(){

    printf("Projeto sobre s�ries e fun��es matem�ticas\n");
    printf("Escolha o que gostaria de fazer.\n");
    printf("Op��o 01 - Somat�ria.\n");
    printf("Op��o 02 - Progress�o Aritm�tica.\n");
    printf("Op��o 03 - Progress�o Geom�trica.\n");
    printf("Op��o 04 - Fatorial.\n");
    printf("Op��o 05 - Sequ�ncia de Fibonacci.\n");
    printf("Op��o 06 - Ordenar Crescente.\n");
    printf("Op��o 07 - Ordenar Decrescente.\n");
    printf("Op��o 08 - Equa��o do Segundo Grau.\n");
    printf("Op��o 09 - �rea Quadril�tero.\n");
    printf("Op��o 10 - �rea Triangulo.\n");
    printf("Op��o 11 - Per�metro Circunfer�ncia\n");
    printf("Op��o 12 - �rea C�rculo\n");

}

void escolha1(){

    printf("escolha1");

}

void escolha2(){

    printf("escolha2");


}

void escolha3(){

    printf("escolha3");

}

void semescolha(){

    printf("sem OP��O");

}

int main(){

    int opcao;

    setlocale(LC_ALL, "Portuguese");

    Cabecalho();
    ImprimiOpcoes();


    printf("\nEscolha uma op��o: ");
    scanf("%d", &opcao);


    switch(opcao){
    case 1:
        escolha1();
        break;
    case 2:
        escolha2();
        break;
    case 3:
        escolha3();
        break;
    default:
        semescolha();
        break;
    }


    return 0;




}

