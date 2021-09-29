#include<stdio.h>

int main()
{
    float salario_min;
    float salario_func;
    float qtn_salarios_min = 0;
    float x = 0;

    printf("\nDigite o valor do salario minimo: ");
    scanf("%f", &salario_min);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_func);

    do{
        x += salario_min;
        qtn_salarios_min += 1;
    }while(x < salario_func);

    printf("A quantidade de salarios minimos que o funcionario recebe e: %2.f", qtn_salarios_min);
    
}
