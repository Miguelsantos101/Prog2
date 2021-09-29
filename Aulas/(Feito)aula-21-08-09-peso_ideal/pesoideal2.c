#include<stdio.h>

int main()
{
    float altura;
    char sexo;
    float peso_ideal;
    int n;
    int i;


    printf("\nQuantas pessoas deseja analisar? ");
    scanf("%d", &n);


    do{
        printf("\ndigite sua altura: ");
        scanf("%f", &altura);

        printf("\ndigite seu sexo: ");
        scanf(" %c", &sexo);

        if(sexo == 'M')
        {
            peso_ideal = (72.7 * altura) - 58.0;
        }
        else
        {
            peso_ideal = (62.1 * altura) - 44.7;
        }

        printf("\nSeu peso ideal e: %5.2f\n", peso_ideal);
        i = i + 1;

    }while (i <= n);
    
}
