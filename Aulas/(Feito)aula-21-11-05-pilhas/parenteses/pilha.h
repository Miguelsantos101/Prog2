
/*definicao de tipos*/
 struct celula
{
    char chave;
    struct celula *prox;
};

/*prototipo das funcoes que manipulam sua estrutura*/


/*Função recebe o ponteiro para o topo da pilha, cria um novo nó(célula) para
armazenar um caracter  e coloca esse nó como topo da pilha*/
void empilhar(char , celula *&);

/*Função recebe o ponteiro para o topo da pilha, desempilha e retorna o valor do topo*/
char desempilhar(celula *&);

/*funcao para desalocar uma pilha*/
void desalocar(celula *&);


/*Função recebe o ponteiro para o topo da pilha e imprime todos os nós (células)
da pilha*/
void imprime(celula *);

