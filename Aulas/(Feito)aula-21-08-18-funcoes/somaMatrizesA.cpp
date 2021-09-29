/*Programa lê duas matrizes A e B de dimensões mxn e calcula a matriz resultante da
soma de A e B*/
#include<stdio.h>
# define MAX 10

/*protótipo das funções*/
void leitura(int M[MAX][MAX], int m, int n);
void impressao(int M[MAX][MAX], int m, int n);
void soma(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n);

/*Função principal*/
int main()
{
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

	int m,	// número de linhas 
		n;	// número de colunas
	

	printf("Digite numero de linhas e colunas: ");
	scanf("%d%d", &m,&n);

	// leitura da matriz A
	leitura(A, m, n);

	// leitura da matriz B
	leitura(B, m, n);

	// soma das matrizes A + B
	soma(A, B, C, m, n);

	// impressao da matriz resultante
	impressao(C, m, n);

	return 0;
}

/*Função para armazenar dados na matriz inteira M de dimensoes m por n*/
void leitura(int M[MAX][MAX], int m, int n)
{

	for(int alpha = 1; alpha < m; alpha++)
	{
		for(int beta = 1; beta < n; beta++)
			{
				scanf("%d", &M[alpha][beta]);
			}
	}

}
/*Função para imprimir as células da matriz inteira M de dimensoes m por n*/
void impressao(int M[MAX][MAX], int m, int n)
{

	for(int alpha = 1; alpha < m; alpha++)
	{
		for(int beta = 1; beta < n; beta++)
		{
			printf("%d ", M[alpha][beta]);
		}

		printf("\n");

	}
}
/*Função calcula a soma das matrizes A e B de dimensões mxn e armazena o resultado
na matriz C*/
void soma(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n)
{
	for(int alpha = 1; alpha < m; alpha++)
	{
		for(int beta = 1; beta < n; beta++)
		{
			C[alpha][beta] = A[alpha][beta] + B[alpha][beta];
		}
	}
}
