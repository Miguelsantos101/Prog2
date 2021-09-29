#include<stdio.h>

int main()
{
    float salario_func;
    float porcentagem;
    float novo_salario;

    printf("\nDigite o salario do funcionario e a porcentagem: ");
    scanf("%f %f", &salario_func, &porcentagem);
    novo_salario = salario_func + (salario_func * (porcentagem / 100));
    printf("\nO novo salario do funcionario e: %.2f", novo_salario);

}
