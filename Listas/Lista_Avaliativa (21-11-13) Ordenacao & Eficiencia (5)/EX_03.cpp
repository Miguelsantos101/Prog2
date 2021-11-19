#include<stdio.h>
#include<stdlib.h>

void LerNumeros(int *v, int n);
void MostrarNumeros(int *v, int n);
void quicksort(int p, int r, int *v);
int separa(int p, int r, int *v);
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

void quicksort(int p, int r, int *v){
    int q;

    if (p < r) {
    q = separa(p, r, v);
    quicksort(p, q, v);
    quicksort(q+1, r, v);
    }
}

int separa(int p, int r, int *v){
    int x, i, j;

    x = v[p];
    i = p - 1;
    j = r + 1;
    
    while (1) {
        do {
            j--;
        } while (v[j] < x);

        do {
            i++;
        } while (v[i] > x);

        if (i < j)
            troca(v[i], v[j]);
        else
            return j;
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

    int numeros[n];

    LerNumeros(numeros, n);

    quicksort(0, n-1, numeros);

    MostrarNumeros(numeros, n);

}
