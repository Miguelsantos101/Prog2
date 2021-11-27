#include<stdio.h>
#include<stdlib.h>

struct celula{
    int valor;
    struct celula *prox;
};

void inserir_fim(int n, celula *&lst){
    celula *novo, *p;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->valor = n;

    if(lst == NULL){
        lst = novo;
    }
    else{
        p = lst;
        
        while(p->prox != NULL){
            p = p->prox;
        }

        p->prox = novo;
    }
}

void imprimir(celula *lst){
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d ", p->valor);

}

void removePares(celula *&lst){
    celula *p;
    for(p = lst; p != NULL; p = p->prox){
        
    }
}

int main(){
    celula *lista = NULL;
    int n;

    scanf("%d", &n);
    while(n != 0){
        inserir_fim(n, lista);
        scanf("%d", &n);
    }

    /* imprimir(lista); */

    removePares(lista);

    return 0;
}
