/*
PROGRAMA QUE CRIA UMA LISTA DINAMICA ENCADEADA
AS OPERACOES REALIZADAS NA LISTA SAO:
- INSERIR LISTA 1
- INSERIR LISTA 2
- CONCATENAR
- IMPRESSAO DAS LISTAS
*/
#include "lista.h"
#include <stdio.h>



/**/
int main()
{
    celula *lista1 = NULL;
    celula *lista2 = NULL;
    int num, op;

    do{

        printf("\n\n1 - Inserir na lista 1");
        printf("\n2 - Inserir na lista 2");
        printf("\n3 - Concatenar listas");
        printf("\n4 - Imprimir listas");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf("%d", &num);
            inserir_fim(num, lista1);
        }
        else if(op == 2)
        {
			scanf("%d", &num);
            inserir_fim(num, lista2);
        }
        else if(op == 3)
        {
            lista1 = concatenar(lista1, lista2);
            printf("Concatenacao relaizada com sucesso.");
        }
        else if(op == 4)
        {
            printf("Lista 1: \n");
            imprimir(lista1);

            printf("\nLista 2: \n");
            imprimir(lista2);
        }

    }while(op != 5);

    /*apagar toda a lista encadeada alocada dinamicamente*/


//    printf("Ponteiro apos desalocar a lista: %p\n", lista);

    return 0;
}
