#include <stdio.h>
#include<string.h>
#define MAX 100

    struct Cliente
    {
        char nome[MAX+1];
        char cpf[12]; 
        bool vip;
    };

void troca_cliente(Cliente cliente_1, Cliente cliente_2);

int main()
{
    Cliente cliente_A, cliente_B = {"Joao", "01234567891", false};

    strcpy(cliente_A.nome, "Mariana");
    strcpy(cliente_A.cpf, "98765432109");
    cliente_A.vip = true;

    troca_cliente(cliente_A, cliente_B);

    printf("Cliente A \nNome: %s \nCPF: %s \n", cliente_A.nome, cliente_A.cpf);
    if (cliente_A.vip)
        printf("Cliente VIP.\n");

    printf("Cliente B \nNome: %s \nCPF: %s \n", cliente_B.nome, cliente_B.cpf);
    if (cliente_B.vip)
        printf("Cliente VIP.\n");

    return 0;    
}

void troca_cliente(Cliente cliente_1, Cliente cliente_2)
{
    Cliente cliente_aux;

    cliente_aux = cliente_1;
    cliente_1 = cliente_2;
    cliente_2 = cliente_aux;

}
