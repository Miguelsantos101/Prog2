/* PROGRAMA PARA LER UMA MATRIZ, O NÚMERO DE UMA LINHA L, UMA CONSTANTE K 
E MULTIPLICAR A LINHA L PELA CONSTANTE K. CONSIDERE UMA MATRIZ DE ORDEM 3 
(para comecar).
*/
#include<stdio.h>
#define MAX 3

// funcao le uma matriz de ordem n
void leitura(int n, int M[MAX][MAX]);

// funcao imprime uma matriz de ordem n
void imprime(int n, int M[][MAX]);

// funcao multiplica um vetor(linha da matriz) por uma constante K
void multLinha(int n, int* M, int K);

void multLinha2(int n, int* M, int K);


int main()
{
	int mat[MAX][MAX];
	int n, L, K;
	
	n = MAX;
	// leitura da matriz
	leitura(n, mat);

	printf("Digite o numero da linha: ");
	scanf("%d", &L);

	printf("Digite um fator K: ");
	scanf("%d", &K);

	// multiplicar a linha L por K
	multLinha2(n, mat[L], K);

	// impressao da matriz
	imprime(n, mat);

	return 0;
}


// funcao le uma matriz de ordem n
void leitura(int n, int M[MAX][MAX])
{
	int *p;

	// p = &A[0][0], p = A[0], p = *A - 1a celula da matriz
	// p <= &A[n-1][n-1] - ultima celula da matriz
	for(p = *M; p < *M + n*n; p++)
		scanf("%d", p);
}



// funcao imprime uma matriz de ordem n
void imprime(int n, int M[][MAX])
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d ", M[i][j]);
		printf("\n");
	}
}

// funcao multiplica um vetor(linha da matriz) por uma constante K
void multLinha(int n, int* M, int K)
{
	int i;

	for(i = 0; i < n; i++)
		M[i] = M[i] * K;
}


// funcao multiplica um vetor(linha da matriz) por uma constante K
void multLinha2(int n, int* M, int K)
{
	int *p;

	for(p = M; p < M + n; p++)
		 *p = *p * K;
}





