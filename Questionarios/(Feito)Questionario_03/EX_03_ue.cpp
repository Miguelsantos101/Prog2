#include<stdio.h>

#define TAM 100

int crescente(int v[TAM], int tam);

int main(){
    int tam;

    scanf("%d", &tam);

    int L[tam];

    for(int alpha = 0; alpha < tam; alpha++){
        scanf("%d", &L[alpha]);
    }

    if(crescente(L, tam) == 1){
        printf("verdadeiro");
    }
    else{
        printf("falso");
    }

    return 0;
}

int crescente(int v[TAM], int tam){
    int valor = 0;
    for(int beta = 0; beta < tam; beta++){
        if(v[beta] < v[beta + 1]){
            valor = true;
        }
        else if(v[beta] >= v[beta + 1]){
            valor = false;
            beta = tam;
        }
    }
    
    if(valor){
        return 1;
    }
    else{
        return 0;
    }
}
