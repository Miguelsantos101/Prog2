#include<stdio.h>
#define MAX 50

// prototipo
void calcula_max_min(float vet[MAX], int n, int &ind_max, int &ind_min);

int main()
{
	float notas[MAX];
	int n, i;
	int maior, menor; // indices do maior e menor elemento

	printf("Digite a quantidade de notas: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%f", &notas[i]);		
	}

	// chamada da função
	calcula_max_min(notas, n, maior, menor);

	// resultado - saída
	printf("Maior elemento: %.2f", notas[maior]);
	printf("Menor elemento: %.2f", notas[menor]);
	printf("Diferença: %.2f", notas[maior]-notas[menor]);

	return 0;
}

void calcula_max_min(float vet[MAX], int n, int &ind_max, int &ind_min)
{
	int i;

	// inicializando os indices, indicando que o maior e menor é o da posicao 0
	ind_max = ind_min = 0;
	for(i = 1; i < n; i++)
	{
		// verificando o menor
		if(vet[i] < vet[ind_min])
			ind_min = i;
		// verificando o maior
		else if(vet[i] > vet[ind_max])
			ind_max = i;
	}	
}
