/*Faca um programa que leia um vetor com os dados de N (N <= 10)livros: 
titulo (maximo de 30 letras), autor (maximo de 30 letras) e ano. Leia um valor P e 
mostre as informacoes de todos os livros com ano abaixo de P. Repita esta consulta
 ate que seja lido um valor P = 0 seja informado. 

- Crie uma funcao para fazer a leitura dos N livros, armazenando-os em um vetor de 
registros. A funcao deve receber como parametro o valor de N e o vetor para armazenar
os dados.

- Crie uma funcao para fazer a listagem dos livros com ano menor que P.*/

#include <stdio.h>

// constantes
#define TAM 10
#define MAX 30

// definicao de tipos
struct tLivro
{
	char titulo[MAX], autor[MAX];
	int ano;
};

void leitura(tLivro vetor[TAM], int n);
void listagem(tLivro vetor[TAM], int n, int P);

// funcao principal
int main()
{
    tLivro livros[TAM];
    int n, P, alpha;
    

    printf("\nQuantidade de livros: ");
    fflush(stdin);
    scanf("%d", &n);

    //leitura
    leitura(livros, n);

    //listagem
    printf("\nInforme o ano para consulta: ");
    fflush(stdin);
    scanf("%d", &P);

    while(P != 0){
        listagem(livros, n, P);

        printf("\nInforme o ano para consulta: ");
        fflush(stdin);
        scanf("%d", &P);
    }

	return 0;
}

void leitura(tLivro vetor[TAM], int n){
    for(int alpha = 0; alpha < n; alpha++){
        printf("\nTitulo: ");
        fflush(stdin);
        gets(vetor[alpha].titulo);

        printf("Autor: ");
        fflush(stdin);
        gets(vetor[alpha].autor);

        printf("Ano: ");
        fflush(stdin);
        scanf("%d", &vetor[alpha].ano);
    }
}

void listagem(tLivro vetor[TAM], int n, int P){
    for(int beta = 0; beta < n; beta++){
        if(vetor[beta].ano < P){
            printf("%-25s%-25s%-15.d\n", vetor[beta].titulo, vetor[beta].autor, vetor[beta].ano);
        }
    }
}
