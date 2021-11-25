/*
LISTA 1
EXERCICIO C) 
+
LISTA 2
EXERCICIO 3
*/
#include "lista.h"
#include <stdio.h>



/**/
int main()
{
    int num, op, i;
    celula* lista = NULL;

    do{

        printf("\n\n1 - Inserir numero após nó i (i >= 1)");
        printf("\n2 - Remover chaves PARES");
        printf("\n3 - Imprimir lista");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("Numero: ");
            scanf("%d", &num);
            printf("Posicao a inserir: ");
            scanf("%d", &i);
            inserir_aposI(num, i, lista);
            printf("Inserido!");
        }
        else if(op == 2)
        {
            removerPares(lista);
        }
        else if(op == 3)
        {
            imprimir(lista);

        }
    }while(op != 4);

    desalocar(lista);

    return 0;
}
