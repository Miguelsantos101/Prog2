/*Faca um programa para cadastrar carros com os seguintes dados: 
marca (maximo de 15 letras), ano e preço. Suponha que no maximo serao cadastrados
30 carros. O seu programa deve possuir o seguinte menu:

1 - Cadastrar um carro: nesta opcao o usuario informa os dados de APENAS UM CARRO, que 
deverão ser armazenados num vetor de registros.

2 - Listar carros: lista os dados de todos os carros cadastrados

3 - Media de precos: calcula e imprime a media dos precos dos carros de um determinado
ano. O usuario informa um ano e a media dos precos dos carros deste ano
deve ser impressa.

FUNCOES A CRIAR:
1 - Uma funcao para cadastrar um carro: recebe o vetor e o numero de carros cadastrados 
ate o momento. Atencao: nesta funcao o numero de carros deverá aumentar em uma unidade.

2 - Uma funcao para listar os dados de todos os carros: recebe o vetor e o numero de carros
cadastrados ate o momento

3 - Uma funcao para calcular e retornar a media dos precos dos carros de um determinado ano 
informado pelo usuario: recebe o vetor, o numero de carros
cadastrados ate o momento e um ano, retorna a media.
*/

#include <stdio.h>
#include <string.h>

#define MAX 15
#define TAM 30

struct tCarro
{
	char marca[MAX];
	int ano;
	float preco;
};

/*prototipo das funcoes*/
void menu();
void cadCar(tCarro vetor[TAM], int &n);
void listCar(tCarro vetor[TAM], int n);
double medAno(tCarro vetor[TAM], int n, int ano);

// funcao principal
int main()
{
	// declaracao de variaveis
	int opcao, n = 0;
	double media;
    tCarro carros[TAM];
    
	do{
		menu();
		scanf("%d", &opcao);

		if(opcao == 1)
		{
            printf("\n");
            cadCar(carros, n);
			// ler os dados de um carro - funcao
		}
		else if(opcao == 2)
		{
            printf("\n");
            listCar(carros, n);
			// imprimir todos os carros cadastrados - funcao
		}
		else if(opcao == 3)
		{
			int ano;
			
			printf("Informe o ano: ");
    		fflush(stdin);
			scanf("%d", &ano);

            media = medAno(carros, n, ano);

			if(media == 0.0)
				printf("Nenhum carro foi encontrado nesse ano.");
			else
				printf("\nMedia dos precos: %.2lf\n", media);
			
			// ler um ano e imprimir a media de precos dos carros do ano
		}
	}while(opcao != 4);

	return 0;
}

void menu()
{
	printf("\n[1] Cadastrar um carro\n");
	printf("[2] Listar carros\n");
	printf("[3] Media de precos de um ano\n");
	printf("Opcao: ");
}

void cadCar(tCarro vetor[TAM], int &n){
	printf("Marca: ");
    fflush(stdin);
    gets(vetor[n].marca);

	printf("Ano: ");
	fflush(stdin);
    scanf("%d", &vetor[n].ano);
	
	printf("Preco: ");
	fflush(stdin);
    scanf("%f", &vetor[n].preco);
	
    n++;
}

void listCar(tCarro vetor[TAM], int n){

	int alpha = 0;
	printf("Lista de carros: \n");

    for(alpha; alpha < n; alpha++){
        printf("%s\t%d\t%.2f", vetor[alpha].marca, vetor[alpha].ano, vetor[alpha].preco);
        printf("\n");
    }
}

double medAno(tCarro vetor[TAM], int n, int ano){
	double soma = 0;
    int beta, cont = 0;

    for(beta = 0; beta < n; beta++){
		if(vetor[beta].ano == ano){
			soma += vetor[beta].preco;
			cont += 1;
		}
	}

    if(cont == 0)
		return 0.0;
	else
		return soma/cont;

}
