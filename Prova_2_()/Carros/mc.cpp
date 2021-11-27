#include "mc.h"


/*funcao procura a marca com codigo 'codmarca' e retorna o endereco
 do no onde a marca foi encontrada. */
tipomarca* buscarMarca(tipomarca* M, char *s){
    tipomarca *p;
    
    p = M;
    while(p != NULL && strcmp(p->nome, s) != 0){
        p = p->prox;
    }
    return p;
}

tipocarro* inserirCarro(tipocarro* C, int codcarro, int codmarca){
    tipocarro *novo, *p;

    novo = (tipocarro*) malloc(sizeof(tipocarro));
    novo->codmarca = codmarca;
    novo->codcarro = codcarro;
    novo->prox = NULL;

    if(C == NULL)
        C = novo;
    else{
        p = C;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }

    return C;
}

void removeCarros(tipocarro *&C, int codmarca){
    tipocarro *p, *j;

    p = C;
    
    while(p != NULL){
        j = p->prox;
        if(codmarca == p->codmarca){
            C = j;
            free(p);
        }
        p = p->prox;
    }
}

void inserirMarca(tipomarca *&M, int codmarca, char *nomemarca){
    tipomarca *novo;

    novo = (tipomarca*) calloc(1, sizeof(tipomarca));
    novo->codmarca = codmarca;
    strcpy(novo->nome, nomemarca);
    novo->prox = M;
    M = novo;
}

void listarCarro(tipocarro* l){
    while(l != NULL){
        printf("%d %d\n", l->codcarro, l->codmarca);
        l = l->prox;
    }
}

void listarMarca(tipomarca* l){
    while(l != NULL)
    {
        printf("%d %s\n", l->codmarca, l->nome);
        l = l->prox;
    }
}

void limparLista(tipocarro *&C){
    tipocarro *aux;

    while(C != NULL){
        aux = C;

        C = aux->prox;

        free(aux);
    }
}
