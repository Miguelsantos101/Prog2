#include<stdio.h>

int main()
{
    float nota_1;
    float nota_2;
    float nota_3;
    float peso_1;
    float peso_2;
    float peso_3;
    float media_arit;

    scanf("%f", &nota_1);
    scanf("%f", &nota_2);
    scanf("%f", &nota_3);
    scanf("%f", &peso_1);
    scanf("%f", &peso_2);
    scanf("%f", &peso_3);

    media_arit = ((nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3)) / 3;
    printf("\nA media aritmetica e:%2.f", media_arit);

}
