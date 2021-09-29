#include<stdio.h>

int main()
{
    #define TAX 0.038
    int deposito;
    int saque_1;
    int saque_2;
    float saldo_final;

    printf("\nDigite o valor do deposito: ");
    fflush(stdin);
    scanf("%d", &deposito);

    printf("\nDigite o valor do primeiro e segundo saques: ");
    scanf("%d %d", &saque_1, &saque_2);

    saldo_final = deposito - (saque_1 + (saque_1 * TAX)) - (saque_2 + (saque_2 * TAX));

    printf("\nSeu saldo final e: %.2f", saldo_final);
    
}
