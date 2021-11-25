#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


void desalocar(celula *&lst)
{
    celula *aux;
    while(lst)         // lst != NULL
    {
        aux = lst;
        lst = lst->prox;
        free(aux);
    }
    //lst = NULL;
}


/*Função recebe o ponteiro para o topo da pilha, cria um novo nó(célula) para
armazenar x e coloca esse nó como topo da pilha*/
void empilhar(char x, celula *&lst)
{
    celula *nova;

    nova = (celula *) malloc(sizeof (celula));
    nova->chave = x;
    nova->prox = lst;
    lst = nova;
}

/*Função recebe o ponteiro para o topo da pilha, desempilha e retorna o valor do topo*/
char desempilhar(celula *&lst)
{
    celula *aux;
    int num;

    if(lst == NULL)
        return '0';
    else{
        num = lst->chave;
        aux = lst;
        lst = lst->prox;
        free(aux);
        return num;
    }
}


/*Função recebe o ponteiro para o topo da pilha e imprime todos os nós (células)
da pilha*/
void imprime(celula *lst)
{
    celula *p;

    for (p = lst; p != NULL; p = p->prox)
        printf("%c ", p->chave);
}

