#include<stdio.h>

int main()
{
    
    int num_matri;
    int horas_mensais;
    int valor_hora;
    float n_filhos;
    float valor_total;

    printf("\nDigite o numero de matricula, numero horas trabalhadas mensais, o valor por hora e o numero de filhos\n\n");
    scanf("%d", &num_matri);
    scanf("%d", &horas_mensais);
    scanf("%d", &valor_hora);
    scanf("%f", &n_filhos);

    valor_total = (horas_mensais * valor_hora);
    valor_total = valor_total + (valor_total * (n_filhos / 10));

    printf("\nO funcionario de matricula %d, ganha por mes: %.2f\n", num_matri, valor_total);

}
