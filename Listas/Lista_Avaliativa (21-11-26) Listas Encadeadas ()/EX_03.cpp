#include<stdio.h>
#include<stdlib.h>

#define MAX 100

struct celula{
    int valor;
    struct celula *prox;
};

void empilhar(int n, celula *&lst){
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->valor = n;
    novo->prox = lst;
    lst = novo;
}

void binario(celula *lst){
    int v = lst->valor;
    int bin[MAX];
    int x = 0;
    
    if(lst->valor == 0){
        printf("%d", 0);
    }
    else{
        while(v >= 1){
        bin[x] = v % 2;
        v = v / 2;
        x++;
        }
    
        for (int alpha = x - 1; alpha >= 0; alpha--){
        printf("%d", bin[alpha]);
        }
    }
}

int main(){
    celula *lista = NULL;
    int num;

    scanf("%d", &num);
    empilhar(num, lista);

    binario(lista);

}
