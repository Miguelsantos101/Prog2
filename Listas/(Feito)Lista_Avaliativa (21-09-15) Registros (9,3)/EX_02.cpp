#include<stdio.h>
#include<string.h>

#define MAX 30
#define TAM 5

struct tAluno{
    int numMatri;
    char nome[MAX], curso[MAX];
};

void infAluno(tAluno aluno[TAM]);
void discentes(tAluno aluno[TAM], char curso[MAX]);

int main(){
    char curso[MAX];
    tAluno alunos[TAM];

    infAluno(alunos);
    scanf(" %[^\n]s", curso);
    discentes(alunos, curso);

    return 0;
}

void infAluno(tAluno aluno[TAM]){
    for(int alpha = 0; alpha < TAM; alpha++){
        scanf("%d",      &aluno[alpha].numMatri);
        scanf(" %[^\n]s", aluno[alpha].nome);
        scanf(" %[^\n]s", aluno[alpha].curso);
    }
}

void discentes(tAluno aluno[TAM], char curso[MAX]){
    for(int beta = 0; beta < TAM; beta++){
        if(strcmp(curso, aluno[beta].curso) == 0){
            printf("%d %s\n", aluno[beta].numMatri,
                              aluno[beta].nome);
        }
    }
}
