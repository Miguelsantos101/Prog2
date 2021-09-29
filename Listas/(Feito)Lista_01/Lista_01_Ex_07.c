#include<stdio.h>

int main()
{
    float pes;
    float polegadas;
    float jardas;
    float milhas;

    printf("\nDigite uma medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1.753;

    printf("\nEssa distancia seria: %.2f em polegadas", polegadas);
    printf("\n%.3f em jardas", jardas);
    printf("\ne %.2f em milhas.", milhas);

}
