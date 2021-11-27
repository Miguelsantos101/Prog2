#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct celula{
    char nome[31];
    struct celula *prox;
};

void lerNome(char *nome, celula *&lstini, celula *&lstfim){
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    strcpy(novo->nome, nome);
    novo->prox = NULL;

    if(lstini == NULL){
        lstini = lstfim = novo;
    }
    else{
        lstfim->prox = novo;
        lstfim = novo;
    }
}

celula* interseccao(celula *L1, celula *L2){
    celula *L3ini = NULL, *L3fim = NULL;

    if(L1 == NULL && L2 == NULL){
        return NULL;
    }
    else{
        celula *aux1, *aux2, *aux3;

        for(aux1 = L1; aux1 != NULL; aux1 = aux1->prox){
            for(aux2 = L2; aux2 != NULL; aux2 = aux2->prox){
                if(strcmp(aux1->nome, aux2->nome) == 0){
                    lerNome(aux1->nome, L3ini, L3fim);
                }
            }
        }

        for(aux3 = L3ini; aux3 != NULL; aux3 = aux3->prox){
            printf("%s ", aux3->nome);
        }

        return L3ini;
    }
}

int main(){
    celula *L1ini = NULL, *L1fim = NULL;
    celula *L2ini = NULL, *L2fim = NULL;
    celula *aux;

    char nome[31];

    scanf("%s", nome);
    while(strcmp(nome, "FIM") != 0){
        lerNome(nome, L1ini, L1fim);
        scanf("%s", nome);
    }

    scanf("%s", nome);
    while(strcmp(nome, "FIM") != 0){
        lerNome(nome, L2ini, L2fim);
        scanf("%s", nome);
    }

    aux = interseccao(L1ini, L2ini);
    if(aux == NULL){
        printf("VAZIA");
    }
    return 0;
}
