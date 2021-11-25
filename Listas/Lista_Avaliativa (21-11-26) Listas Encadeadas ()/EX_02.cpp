#include<stdio.h>
#include<stdlib.h>

struct celula{
    int valor;
    struct celula *prox;
};

void inserir_fim(int n, celula *&lst);
int soma(celula *L);

int main(){
    celula *lista = NULL;
    int n;

    scanf("%d", &n);
    while(n >= 0){
        inserir_fim(n, lista);
        scanf("%d", &n);
    }

    printf("%d", soma(lista));

    return 0;
}

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

int soma(celula *L){
    celula *alpha;
    int x = 0;

    for(alpha = L; alpha != NULL; alpha = alpha->prox){
        x += alpha->valor;
    }

    return x;
}
