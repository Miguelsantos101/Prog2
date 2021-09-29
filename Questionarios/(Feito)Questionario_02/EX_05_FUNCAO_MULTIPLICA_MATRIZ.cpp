#include<stdio.h>

#define MAX 100

void receberMatriz(int m, int n, int matriz[MAX][MAX]);
void receberVetor(int n, int vetor[MAX]);
void multiplicarMatrizVetor(int m, int n, int matriz[MAX][MAX], int vetor[MAX], int matrizAux[MAX][MAX]);
void imprimeMatrizV(int m, int matriz[MAX][MAX]);

int main(){
    int A[MAX][MAX], B[MAX], C[MAX][MAX], m, n;

    scanf("%d%d", &m, &n);

    receberMatriz(m, n, A);
    receberVetor(n, B);
    multiplicarMatrizVetor(m, n, A, B, C);
    imprimeMatrizV(m, C);
    return 0;
}

void receberMatriz(int m, int n, int matriz[MAX][MAX]){
    for(int alpha = 0; alpha < m; alpha++){
        for(int beta = 0; beta < n; beta++){
            scanf("%d", &matriz[alpha][beta]);
        }
    }
}

void receberVetor(int n, int vetor[MAX]){
    for(int gamma = 0; gamma < n; gamma++){
        scanf("%d", &vetor[gamma]);
    }
}

void multiplicarMatrizVetor(int m, int n, int matriz[MAX][MAX], int vetor[MAX], int matrizAux[MAX][MAX]){
    for(int delta = 0; delta < m; delta++){
        for(int epsilon = 0; epsilon < n; epsilon++){
            matrizAux[0][delta] += matriz[delta][epsilon] * vetor[epsilon];
        }
    }
}

void imprimeMatrizV(int m, int matriz[MAX][MAX]){
    for(int epsilon = 0; epsilon < m; epsilon++){
            printf("%d ", matriz[0][epsilon]);
        }
        printf("\n");
}
