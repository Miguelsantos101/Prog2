#include<stdio.h>
#include<stdlib.h>

#define MAX 20

struct TAlunos{
    char Nome[MAX];
    int Ex;
};

void LerAlunos(TAlunos *alunos, int n){
    for(int alpha = 0; alpha < n; alpha++){
        fflush(stdin);
        scanf("%[^0-9]%d", alunos[alpha].Nome, 
                          &alunos[alpha].Ex);
    }
}

void MostrarAlunos(TAlunos *alunos, int n){
    printf("\n");

    for(int beta = 0; beta < n; beta++){
        printf("%s", alunos[beta].Nome);
    }
}

int main(){
    int n;

    system("CLS");
    scanf("%d", &n);

    TAlunos Alunos[n];

    LerAlunos(Alunos, n);

    MostrarAlunos(Alunos, n);
}
