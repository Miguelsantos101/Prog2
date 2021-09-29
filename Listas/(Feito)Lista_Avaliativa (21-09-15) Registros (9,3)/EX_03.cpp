#include<stdio.h>

#define MAX 15
#define TAM 5

struct tEletroD{
    char nome[MAX];
    double potencia, tempDia;
};

void infEletroD(tEletroD casa[TAM]);
void consumoEletroD(tEletroD casa[TAM], int t, double totalTdias);

int main(){
    int t;
    double consumo_total = 0;

    tEletroD casa[TAM];

    infEletroD(casa);

    fflush(stdin);
    scanf("%d", &t);

    consumoEletroD(casa, t, consumo_total);

    return 0;
}

void infEletroD(tEletroD casa[TAM]){
    for(int alpha = 0; alpha < TAM; alpha++){
        fflush(stdin);
        scanf(" %[^\n]s",casa[alpha].nome);

        fflush(stdin);
        scanf("%lf", &casa[alpha].potencia);

        fflush(stdin);
        scanf("%lf", &casa[alpha].tempDia);
    }
}

void consumoEletroD(tEletroD casa[TAM], int t, double totalTdias){
    double consR = 0;

    for(int beta = 0; beta < TAM; beta++){
        totalTdias += casa[beta].potencia * casa[beta].tempDia * t;
    }

    printf("%.2f\n", totalTdias);

    for(int gamma = 0; gamma < TAM; gamma++){
        consR = ((casa[gamma].potencia * casa[gamma].tempDia * t) / totalTdias) * 100;
        printf("%.2f\n", consR);
    }
}
