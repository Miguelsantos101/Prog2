#include<stdio.h>

int main()
{
    #define PI 3.14
    int raio;
    int area;

    printf("\nDigite o raio do circulo: ");
    scanf("%d", &raio);

    area = PI * (raio * raio);
    
    printf("\nA area do circulo e: %d", area);

}
