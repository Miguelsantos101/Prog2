/*
arquivo contendo todos as funcoes implementadas*/
#include "lista.h"
#include <stdio.h> /*printf*/
#include <stdlib.h> /*malloc, calloc, free*/



/*Funcao que apaga todos os nos da lista L*/
void desalocar(celula* &L)
{
    celula *aux;

    while( L != NULL)
    {
        aux = L;

        L = aux->prox;

        free(aux);
    }
}


void inserir_fim(int n, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = n;
    novo->prox = NULL;

    if(lst == NULL)
        lst = novo;
    else{
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
}


void inserir_inicio(int n, celula* &lst)
{
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = n;
    novo->prox = lst;
    lst = novo;
}


void remover(int x, celula* &lst)
{
    celula *p, *q;
    p = NULL;
    q = lst;
    while (q != NULL && q->chave != x) {
        p = q;
        q = q->prox;
    }
    if(q == NULL)
        printf("%d nao foi encontrado.", x);
    else{
        if (p != NULL)
            p->prox = q->prox;
        else
            lst = q->prox;

        free(q);
    }
}


/*Funcao imprime o campo chave armazenado em cada no da lista L*/
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d ", p->chave);

}



void inserir_aposI (int x, int i, celula *&L)
{
    celula *novo = (celula*) calloc(1, sizeof(celula));

    novo->chave = x;


    if(L == NULL)
        L = novo;
    else{
        int cont = 1; // numerar o no por onde passamos
        celula* p = L;
        // percorrendo os nos para encontrar o i-esimo
        while(cont < i && p->prox != NULL)
        {
            p = p->prox;
            cont++;
        }
        novo->prox = p->prox;
        p->prox = novo;
    }    
    
}


void removerPares(celula *&L)
{
    celula *p, *q;

    p = NULL;
    q = L;  // primeiro no da lista

    while(q != NULL)
    {
        if(q->chave %2 == 0)
        {
            // q é o primeiro no
            if(p == NULL)
            {
                L = L->prox;  // L = q->prox
                free(q);
                q = L;
            }
            else{   // q eh um outro no qualquer
                p->prox = q->prox;
                free(q);
                q = p->prox;
            }
        }
        else{
            p = q;
            q = q->prox;
        }
    }
}







