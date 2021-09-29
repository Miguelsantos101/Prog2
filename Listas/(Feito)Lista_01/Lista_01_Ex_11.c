#include<stdio.h>

int main()
{
    int espetaculo;
    int conv_indv;
    int lucro = 0;
    int convites_vendidos = 0;

    printf("\nDigite o valor do espetaculo: ");
    scanf("%d", &espetaculo);

    printf("Digite o valor do convite individual: ");
    scanf("%d", &conv_indv);

    do{
        lucro += conv_indv;
        convites_vendidos += 1;
    }while(lucro <= espetaculo);
    

    printf("O valor minimo de convites vendidos para custear o espetaculo sera de: %d", convites_vendidos);

}
