#include<stdio.h>
#define MAX 60
#define TAM 5

struct tData{
    int dia, mes, ano;
};

struct tAgenda{
    char compromisso[MAX];
    tData data;
};

void LeituraComp(tAgenda agenda[TAM]);
void ImprimeComp(int M, int A, tAgenda agenda[TAM]);

int main(){
    int Mes, Ano;

    tAgenda agenda[TAM];

    LeituraComp(agenda);

    fflush(stdin);
    scanf("%d/%d", &Mes, &Ano);

    do{
        ImprimeComp(Mes, Ano, agenda);

        fflush(stdin);
        scanf("%d/%d", &Mes, &Ano);

    }while(Mes != 0);

    return 0;
}

void LeituraComp(tAgenda agenda[TAM]){
    for(int alpha = 0; alpha < TAM; alpha++){
        fflush(stdin);
        scanf("%s",         agenda[alpha].compromisso);

        fflush(stdin);
        scanf("%d/%d/%d",   &agenda[alpha].data.dia, 
                            &agenda[alpha].data.mes, 
                            &agenda[alpha].data.ano);
    }
}

void ImprimeComp(int M, int A, tAgenda agenda[TAM]){
    for(int beta = 0; beta < TAM; beta++){
        if(agenda[beta].data.mes == M && agenda[beta].data.ano == A){
            printf("%s\n",agenda[beta].compromisso);
        }  
    }
}
