#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Cabecalho(){

    printf("Projeto sobre séries e funções matemáticas\n");
    printf("Escolha o que gostaria de fazer.\n");
    printf("Opção 01 - Somatória.\n");
    printf("Opção 02 - Progressão Aritmética.\n");
    printf("Opção 03 - Progressão Geométrica.\n");
    printf("Opção 04 - Fatorial.\n");
    printf("Opção 05 - Sequência de Fibonacci.\n");
    printf("Opção 06 - Ordenar Crescente.\n");
    printf("Opção 07 - Ordenar Decrescente.\n");
    printf("Opção 08 - Equação do Segundo Grau.\n");
    printf("Opção 09 - Área Quadradro/Retângulo.\n");
    printf("Opção 10 - Área Triangulo.\n");
    printf("Opção 11 - Perímetro Circunferência\n");
    printf("Opção 12 - Área Círculo\n");

}

void ImprimiOpcoes(){

    printf("Projeto sobre séries e funções matemáticas\n");
    printf("Escolha o que gostaria de fazer.\n");
    printf("Opção 01 - Somatória.\n");
    printf("Opção 02 - Progressão Aritmética.\n");
    printf("Opção 03 - Progressão Geométrica.\n");
    printf("Opção 04 - Fatorial.\n");
    printf("Opção 05 - Sequência de Fibonacci.\n");
    printf("Opção 06 - Ordenar Crescente.\n");
    printf("Opção 07 - Ordenar Decrescente.\n");
    printf("Opção 08 - Equação do Segundo Grau.\n");
    printf("Opção 09 - Área Quadrilátero.\n");
    printf("Opção 10 - Área Triangulo.\n");
    printf("Opção 11 - Perímetro Circunferência\n");
    printf("Opção 12 - Área Círculo\n");

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

    printf("sem OPÇÃO");

}

int main(){

    int opcao;

    setlocale(LC_ALL, "Portuguese");

    Cabecalho();
    ImprimiOpcoes();


    printf("\nEscolha uma opção: ");
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

