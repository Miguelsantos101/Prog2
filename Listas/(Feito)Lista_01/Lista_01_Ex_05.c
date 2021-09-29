#include<stdio.h>

int main()
{
    int base;
    int altura;
    int area;

    printf("\nDigite a base e altura do triangulo: ");
    scanf("%d %d", &base, &altura);

    area = (base * altura) / 2;
    printf("\nA area do triangulo e de: %d", area);

}
