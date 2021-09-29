#include<stdio.h>

#define MAX 100

void receberMatriz(int m, int n, int matriz[MAX][MAX]);
void somarMatrizes(int m, int n, int matrizA[MAX][MAX], int matrizB[MAX][MAX], int matrizAux[MAX][MAX]);
void imprimeMatriz(int m, int n, int matriz[MAX][MAX]);

int main(){
    int A[100][100], B[100][100], C[100][100], m, n;

    scanf("%d%d", &m, &n);

    receberMatriz(m, n, A);
    receberMatriz(m, n, B);
    somarMatrizes(m, n, A, B, C);
    imprimeMatriz(m, n, C);
    printf("\n");
    return 0;
}

void receberMatriz(int m, int n, int matriz[MAX][MAX]){
    for(int alpha = 0; alpha < m; alpha++){
        for(int beta = 0; beta < n; beta++){
            scanf("%d", &matriz[alpha][beta]);
        }
    }
}

void somarMatrizes(int m, int n, int matrizA[MAX][MAX], int matrizB[MAX][MAX], int matrizAux[MAX][MAX]){
    for(int gamma = 0; gamma < m; gamma++){
        for(int delta = 0; delta < n; delta++){
            matrizAux[gamma][delta] = matrizA[gamma][delta] + matrizB[gamma][delta];
        }
    }
}

void imprimeMatriz(int m, int n, int matriz[MAX][MAX]){
    for(int epsilon = 0; epsilon < m; epsilon++){
        for(int zeta = 0; zeta < n; zeta++){
            printf("%d ", matriz[epsilon][zeta]);
        }
        printf("\n");
    }
}
