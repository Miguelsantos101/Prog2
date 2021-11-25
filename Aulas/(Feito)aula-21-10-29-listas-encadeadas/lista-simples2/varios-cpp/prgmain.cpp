/*
PROGRAMA QUE CRIA UMA LISTA DINAMICA ENCADEADA
AS OPERACOES REALIZADAS NA LISTA SAO:
- INSERCAO NO FIM DA LISTA
- REMOCAO DE UM ELEMENTO QUALQUER
- IMPRESSAO DA LISTA
*/
#include "lista.h"
#include <stdio.h>



/**/
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
            scanf("%d", &num);
            remover(num, lista);
        }
        else if(op == 3)
        {
            imprimir(lista);

        }
    }while(op != 4);

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);


    printf("Ponteiro apos desalocar a lista: %p\n", lista);

    return 0;
}
