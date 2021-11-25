#include<stdio.h>
#include<stdlib.h>

struct celula{
    int chave;
    struct celula *prox;
};

void inserir_fim(int n, celula *&lst);

int main(){
    celula *lista = NULL;
    int num, count = 0;

    scanf("%d", &num);
    while(num != 0){
        inserir_fim(num, lista);
        count++;
        scanf("%d", &num);
    }
    
    printf("%d", count);

    return 0;
}

void inserir_fim(int n, celula *&lst){
    celula *novo, *p;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = n;

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
