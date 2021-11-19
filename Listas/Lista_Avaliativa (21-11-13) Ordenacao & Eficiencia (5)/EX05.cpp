#include<stdio.h>

#define MAX 100

void LerNumeros(int *v, int n);
void MostrarNumeros(int *v, int n);
void selection(int n, int v[MAX]);
void troca(int &vAtual, int &vMin);

void LerNumeros(int *v, int n){
    for(int alpha = 0; alpha < n; alpha++){
        scanf("%d", &v[alpha]);
    }
}

void MostrarNumeros(int *v, int n){
    for(int beta = 0; beta < n; beta++){
        printf("%d ", v[beta]);
    }
}

void selection(int n, int v[MAX]){
    int min;
    
    for(int beta = 0; beta < n - 1; beta++){
        min = beta;
        for(int gamma = beta + 1; gamma < n; gamma++){
            if(v[gamma] < v[min]){
                min = gamma;
            }
        }
        troca(v[beta], v[min]);
    }
}

void troca(int &vAtual, int &vMin){
    int aux;

    aux = vAtual;
    vAtual = vMin;
    vMin = aux;
}

int main(){
    int n;

    scanf("%d", &n);

    int v[n];

    LerNumeros(v, n);

    selection(n, v);
    
    MostrarNumeros(v, n);
}
