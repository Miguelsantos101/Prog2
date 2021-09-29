/*Escreva um programa para realizar operacoes sobre um vetor, conforme menu a segui

[1] - Inserir vetor
[2] - Imprimir vetor
[3] - Remover o menor elemento
[4] - Sair

Opcao 1 - o usuario informa n, a quantidade de elementos a inserir no vetor, seguido dos 
elementos. Considere que n <= 50. Sempre que a opcao 1 for escolhida o usuario podera 
informar um novo vetor. Utilize uma funcao 'leitura' para realizar a leitura dos n
elementos do vetor

Opcao 2 - o programa deve imprimir o vetor atual com n elementos. Utilize a funcao 
'impressao' para realizar a impressao dos elementos

Opcao 3 - o programa deve imprimir o menor elemento, bem como remove-lo do vetor. 
Observe que, com a remocao de um elemento, o valor de n deve ser alterado.
Crie uma função removeMinimo para ser usada nesta opcao. A função deve receber o vetor, 
remover o menor elemento (considere que nao ha repeticao no vetor),
retornando para a funcao main o valor que foi removido. Além disso, o valor de n deve
ser alterado dentro da funcao removeMinimo.
*/



#include<stdio.h>
#define TAM 50

// prototipo
void leitura(int v[TAM], int n){
	for(int alpha = 0; alpha < n; alpha++){ // 0,1,2,...,n-1
		scanf("%d", &v[alpha]);
	}
}	

void impressao(int v[TAM], int n){
	for(int beta = 0; beta < n; beta++){ // 0,1,2,...,n-1
		printf("%d ", v[beta]);	
	}	
}

int removeMinimo(int v[TAM], int &n){
	int gamma;
	int menor, posMenor;

	menor = v[0];
	posMenor = 0;
	for(gamma = 1; gamma < n; gamma++){ // procurando a posicao do menor
		if(v[gamma] < menor){
			menor = v[gamma];
			posMenor = gamma;
		}
	}

	// movimentando uma casa p esquerda - sobrescreve a posicao do Menor
	for(gamma = posMenor; gamma < n-1; gamma++){	
		v[gamma] = v[gamma+1];
	}
	// um elemento foi removido, n é decrementado
	n = n-1;

	return menor;
}

int main()
{
	int opcao;		// opcao do menu
	int vetor[TAM]; // vetor de números
	int n = 0;			// numero de elementos a armazenar no vetor

	do{
		printf("\n\n[1] Inserir vetor");
		printf("\n[2] Imprimir vetor");
		printf("\n[3] Remover o menor elemento");
		printf("\n[4] Sair\n");
		scanf("%d", &opcao);
		
		if(opcao == 1)
		{
			printf("Insira o tamanho do vetor: ");
			scanf("%d", &n);
			// chamada da funcao para leitura do vetor
			leitura(vetor, n);

		}
		else if(opcao == 2)
		{
			if(n > 0)
			{ 
				// chamada da funcao para impressao do vetor
				impressao(vetor, n);
			}
		}
		else if(opcao == 3)
		{
			if(n > 0)
			{
				// remocao do menor elemento e retorno do seu valor
				printf("O menor valor do vetor era: %d", removeMinimo(vetor, n));
			}
		}

	}while(opcao != 4);

	return 0;
}
