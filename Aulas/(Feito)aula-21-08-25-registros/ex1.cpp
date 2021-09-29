#include<stdio.h>
#define MAX 50

struct tAluno{
    int mat;
    char nome[21];
    float n1, n2, media;
};


int main(){
    
    int n;
    tAluno alunos[MAX];
    int i;

    printf("\nDigite o numero de alunos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nMatricula: ");
        scanf("%d", &alunos[i].mat);

        printf("Nome: ");
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Duas notas: ");
        scanf("%f%f", &alunos[i].n1, &alunos[i].n2);

        alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
    }

    // Listagem
    printf("\nListagem\n");
    for(i = 0; i < n; i++){
        printf("%d %s %.1f\n\n", alunos[i].mat, alunos[i].nome, alunos[i].media);
    }

    return 0;
}
