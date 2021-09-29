#include<stdio.h>

int main()
{
    float altura;
    char sexo;
    float peso_ideal;


    scanf("%f %c", &altura, &sexo );

    if (sexo == 'M')
    {
        peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal = %2.f", peso_ideal);
    }
    else
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal = %2.f", peso_ideal);
    } 
}
