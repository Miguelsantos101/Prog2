#include <stdio.h> /*printf*/
#include <stdlib.h> /*malloc, calloc, free*/

struct celula
{
    int chave;
    struct celula *prox;
};

/*void desalocar(celula* &L);

void inserir_inicio(int n, celula* &lst);

void remover(int x, celula* &lst);*/

void inserir_fim(int n, celula* &lst);

void imprimir(celula *lst);


int main()
{
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num, op;

    do{

        printf("\n\n1 - Inserir numero no fim da lista");
        printf("\n2 - Remover da lista");
        printf("\n3 - Imprimir lista");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf("%d", &num);
            inserir_fim(num, lista);
        }
        else if(op == 2)
        {
            //scanf("%d", &num);
            //remover(num, lista);
        }
        else if(op == 3)
        {
            imprimir(lista);
        }
    }while(op != 4);

    /*apagar toda a lista encadeada alocada dinamicamente*/
    //desalocar(lista);

    //printf("Ponteiro apos desalocar a lista: %p\n", lista);

    return 0;
}



/*Funcao imprime o campo chave armazenado em cada no da lista L*/
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d ", p->chave);

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

/*
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


//Funcao que apaga todos os nos da lista L
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
*/


