#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 40

/*tipo struct para marca */
struct tipomarca
{
    int codmarca;
    char nome[TAM];
    struct tipomarca *prox;
};


/*tipo struct para carro */
struct tipocarro
{
    int codmarca;   // codigo da marca do carro
    int codcarro;   // codigo do carro
    struct tipocarro *prox;
};

tipomarca* buscarMarca(tipomarca* , char*);

tipocarro* inserirCarro(tipocarro* , int , int);

void removeCarros(tipocarro*&, int);

void inserirMarca(tipomarca*& , int , char *);

void listarMarca(tipomarca* );

void listarCarro(tipocarro* );

void limparLista(tipocarro*& );
