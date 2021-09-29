#include<stdio.h>

int main(){
    int intNum;
    int umDigito;
    int doisDigito;
    int divRes;
    int soma;
    
    scanf("%d", &intNum);

    divRes = intNum % 100;

    umDigito = divRes / 10;
    doisDigito = divRes % 10;


    soma = umDigito + doisDigito;

    printf("%d\n", soma);

    return 0;
}
