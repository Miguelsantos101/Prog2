#include<stdio.h>


int main(){
    double prova1;
    double prova2;
    double prova3;
    double mediaProvas;
    double trabalho1;
    double trabalho2;
    double mediaTrabalhos;
    double mediaFinal;

    fflush(stdin);
    scanf("%lf%lf%lf%lf%lf", &prova1, &prova2, &prova3, &trabalho1, &trabalho2);

    mediaProvas = (prova1 + prova2 + prova3) / 3;
    mediaTrabalhos = (trabalho1 + trabalho2) / 2;
    mediaFinal = (mediaProvas * 0.75) + (mediaTrabalhos * 0.25);

    printf("======= NOTAS ========\n");
    printf("Primeira Prova    %4.1lf\n", prova1);
    printf("Segunda Prova     %4.1lf\n", prova2);
    printf("Terceira Prova    %4.1lf\n", prova3);
    printf("Média Provas     %4.1lf\n\n", mediaProvas);
    printf("Primeiro Trabalho %4.1lf\n", trabalho1);
    printf("Segundo Trabalho  %4.1lf\n", trabalho2);
    printf("Média Trabalhos  %4.1lf\n", mediaTrabalhos);
    printf("----------------------\n");
    printf("Média Final      %4.1lf\n", mediaFinal);

   return 0;
}
