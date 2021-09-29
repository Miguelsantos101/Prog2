#include<stdio.h>
#include<ctype.h>

int main(){
    double saldo_Anterior;
    double valor_Operacao;
    double saldo_Atual;
    char operacao;

    scanf("%lf %c %lf", &saldo_Anterior, &operacao, &valor_Operacao);

    if(saldo_Anterior <= 10000){

        if(operacao == 'D'){
            saldo_Atual = saldo_Anterior + valor_Operacao;
            printf("Saldo atual: R$%+10.2f\n", saldo_Atual);
        }
        else if(operacao == 'S'){
            saldo_Atual = saldo_Anterior - valor_Operacao;
            printf("Saldo atual: R$%+10.2f\n", saldo_Atual);
        }
        else{
            printf("Saldo atual: R$%+10.2f\n", saldo_Anterior);
        }

    }
    return 0;
}
