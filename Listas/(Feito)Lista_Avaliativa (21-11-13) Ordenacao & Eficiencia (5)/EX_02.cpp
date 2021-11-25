#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20

struct TAlunos{
    char Nome[MAX];
    int Ex;
};

void LerAlunos(TAlunos *alunos, int n);
void MostrarAlunos(TAlunos *alunos, int n);
void OrdenaAlunos(TAlunos *alunos, int n);
void TrocaAlunos(TAlunos &alunosA, TAlunos &alunosMin);


void LerAlunos(TAlunos *alunos, int n){
    for(int alpha = 0; alpha < n; alpha++){
        fflush(stdin);
        scanf("%s %d", alunos[alpha].Nome, 
                      &alunos[alpha].Ex);
    }
}

void MostrarAlunos(TAlunos *alunos, int n){
    for(int beta = 0; beta < n; beta++){
        printf("%s ", alunos[beta].Nome);
    }
}

void OrdenaAlunos(TAlunos *alunos, int n){
    int min;

    for(int gamma = 0; gamma < n - 1; gamma++){
        min = gamma;
        for(int delta = gamma + 1; delta < n; delta++){
            if(alunos[delta].Ex > alunos[min].Ex){
                min = delta;
            }
            else if(alunos[delta].Ex == alunos[min].Ex){
                if(strcmp(alunos[delta].Nome, alunos[min].Nome) < 0){
                    min = gamma;
                }
            }
        }
        TrocaAlunos(alunos[gamma], alunos[min]);
    }
}

void TrocaAlunos(TAlunos &alunosA, TAlunos &alunosMin){
    TAlunos aux;

    aux = alunosA;
    alunosA = alunosMin;
    alunosMin = aux;
}

int main(){
    int n;

    scanf("%d", &n);

    TAlunos Alunos[n];

    LerAlunos(Alunos, n);

    OrdenaAlunos(Alunos, n);

    MostrarAlunos(Alunos, n);
}
