#include<stdio.h>

int main()
{
    float deposito;
    float tax_juros;
    float total_rend;
    float total_final;

    printf("\nDigite o total do deposito e a taxa de juros: ");
    scanf("%f %f", &deposito, &tax_juros);

    total_rend = deposito * (tax_juros / 100);
    total_final = deposito + total_rend;

    printf("\nO rendimento total foi: %2.f\n", total_rend);
    printf("e o total final foi: %2.f", total_final);

}
