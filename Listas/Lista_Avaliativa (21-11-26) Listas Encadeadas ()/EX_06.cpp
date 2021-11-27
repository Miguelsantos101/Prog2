#include<stdio.h>
#include<stdlib.h>

struct celula{
    int valor;
    struct celula *prox;
};

void inserir_fim(int n, celula *&L1){
    celula *novo, *p;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->valor = n;

    if(L1 == NULL){
        L1 = novo;
    }
    else{
        p = L1;
        
        while(p->prox != NULL){
            p = p->prox;
        }

        p->prox = novo;
    }
}

void imprimir(celula *L){
    celula *p;
    for(p = L; p != NULL; p = p->prox)
        printf("%d ", p->valor);

}

void removeIguais(celula *&L1, celula *&L2, celula *&L3){
    celula *p, *j;
    int soma = 0, y;

    for(p = L1; p != NULL; p = p->prox){
        soma++;
    }

    for(p = L1; p != NULL; p = p->prox){
        inserir_fim(p->valor, L2);
    }

    for(p = L1; p != NULL; p = p->prox){
        y = 0;
        for(j = L2; j != NULL; j = j->prox){
            if(p->valor == j->valor){
                y++;
                if(y < 2){
                    inserir_fim(p->valor, L3);
                }
            }
        }
    }

}

int main(){
    celula *L1 = NULL, *L2 = NULL, *L3 = NULL;
    int n;

    scanf("%d", &n);
    while(n != 0){
        inserir_fim(n, L1);
        scanf("%d", &n);
    }

    /* imprimir(L1); */

    removeIguais(L1, L2, L3);

    imprimir(L3);

    return 0;
}
