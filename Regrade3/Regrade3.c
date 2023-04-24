#include <stdio.h>
#include <stdlib.h>

void PularLinha(){

    printf("\n");

}


void Regrade3(){

    float volumePesoInicial, volumePesoFinal, precoInicial, precoFinal;
    float volumePesoReferencia = 1000;
    int escolha;


    do{
        printf("Se o valor de entrada for em mL (Digite 1), se for em g (Digite 2) ou numero qualquer para sair: ");
        scanf("%d", &escolha);
        PularLinha();

        if(escolha == 1){
            printf("Digite o volume do produto em mL: ");
            scanf("%f", &volumePesoInicial);

            printf("Digite o valor do produto: ");
            scanf("%f", &precoInicial);

            PularLinha();

            precoFinal = (precoInicial * volumePesoReferencia) / volumePesoInicial;

            printf("Esse produto custa: R$ %.2f por L.", precoFinal);

            PularLinha();
            PularLinha();

            system("PAUSE");
        }

        if(escolha == 2){
            printf("Digite o peso do produto em g: ");
            scanf("%f", &volumePesoInicial);

            printf("Digite o valor do produto: ");
            scanf("%f", &precoInicial);

            PularLinha();

            precoFinal = (precoInicial * volumePesoReferencia) / volumePesoInicial;

            printf("Esse produto custa: R$ %.2f por Kg.", precoFinal);

            PularLinha();
            PularLinha();

            system("PAUSE");
        }

        system("CLS");

    }while(escolha == 1 || escolha == 2);




}

int main()
{
    //Regrade3();

    int x = 0;

    do{
        printf("valor de X: %d", x);
        x = x + 2;
        printf("\n");

    }while(x < 6);


    return 0;
}
