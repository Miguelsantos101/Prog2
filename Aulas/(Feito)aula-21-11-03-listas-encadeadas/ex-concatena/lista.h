/*
 definicao de tipos de dados para criacao da lista simplesmente encadeada
 definicao de constantes
 prototipos das funcoes para realizar as operacoes sobre a lista */


struct celula
{
    int chave;
    struct celula *prox;
};

void desalocar(celula* &L);

void inserir_fim(int n, celula* &lst);

void remover(int x, celula* &lst);

void imprimir(celula *lst);

celula* concatenar(celula *L1, celula *&L2);

