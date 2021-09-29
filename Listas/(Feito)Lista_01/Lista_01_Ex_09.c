#include<stdio.h>

int main()
{
    int ano_nasc;
    int ano_atual = 2021;
    int idade_atual;
    int idade_2034;

    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", &ano_nasc);

    idade_atual = ano_atual - ano_nasc;
    idade_2034 = 2034 - ano_nasc;

    printf("\nSua idade atual e: %d", idade_atual);
    printf("\nSua idade em 2034 sera de: %d", idade_2034);

}
