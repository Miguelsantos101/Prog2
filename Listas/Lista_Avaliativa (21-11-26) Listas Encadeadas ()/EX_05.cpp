#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct celula{
    int valor;
    struct celula *prox;
};

void inserirL1(celula *&L1){
    int num;

    scanf("%d", &num);
    for(int alpha = 0; num != 0; alpha++){
        celula *novo, *p;
        novo = (celula*) calloc(1, sizeof(celula));
        novo->valor = num;

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
        scanf("%d", &num);
    }
}

int* transfV(celula *L1){
    celula *aux;
    int soma = 0, *v;

    for(aux = L1; aux != NULL; aux = aux->prox){
        soma++;
    }

    v = (int *) malloc(soma * sizeof(int));

    if(v != NULL){
        for(int beta = 0; beta < soma; beta++){
            v[beta] = L1->valor;
            L1 = L1->prox;
        }
        return v;
    }
    else{
        return NULL;
    }
}

celula* transfL2(int *v, celula *L1){
    celula *aux, *L2 = NULL;
    int soma = 0;

    for(aux = L1; aux != NULL; aux = aux->prox){
        soma++;
    }

    for(int alpha = 0; alpha < soma; alpha++){
        celula *novo, *p;

        novo = (celula*) malloc(sizeof(celula));
        novo->valor = v[alpha];
        novo->prox = NULL;

        if(L2 == NULL){
            L2 = novo;
        }
        else{
            p = L2;

            while(p->prox != NULL){
                p = p->prox;
            }

            p->prox = novo;
        }
    }
    return L2;
}

void imprimirL2(celula *L2){
    celula *p;
    for(p = L2; p != NULL; p = p->prox){
        printf("%d ", p->valor);
    }
}


int main(){
    celula *L1 = NULL, *L2 = NULL;
    int *v;

    inserirL1(L1);
    v = transfV(L1);
    L2 = transfL2(v, L1);
    imprimirL2(L2);

    return 0;
}
