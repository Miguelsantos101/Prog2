#include <stdio.h>
#include "pilha.h"

#define TAM 30

char analisar(char* exp);


int main()
{
    int op;
    char exp[TAM];
    
    do
    {
        printf("\n1 - Analisar expressao");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("Expressao: ");
            scanf(" %s", exp);

            printf("%c\n", analisar(exp));
        }
        

    }while(op != 4);

    return 0;
}


char analisar(char* exp)
{
    int i;
    celula* topo = NULL;
    char ch;
    char resp = 'S';

    while(exp[i] != '\0')
    {
        if(exp[i] == '(')
            empilhar(')', topo);

        else if(exp[i] == '{')
            empilhar('}', topo);

        else if(exp[i] == ')' || exp[i] == '}'){
            ch = desempilhar(topo);

            if(ch != exp[i])
                resp = 'N';
        }
        i++;
    }
    if(topo != NULL)
        resp = 'N';

    return resp;

}
