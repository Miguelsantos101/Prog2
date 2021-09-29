#include<stdio.h>
#include<string.h> // strcpy

#define TAM 11

// prototipo
void consultaCategoria(int id, char categoria[TAM]);

int main()
{
	int idade;
	char categ[TAM];

	scanf("%d", &idade);
	while(idade > 0)
	{
		consultaCategoria(idade, categ);
		printf("%d - %s", idade, categ);
		// ler a proxima idade
		scanf("%d", &idade);
	}

	return 0;
}


/*int main()
{
	int idade;
	char categ[TAM];

	do{	
		scanf("%d", &idade);
		if(idade > 0){		
			consultaCategoria(idade, categ);
			printf("%d - %s", idade, categ);
		}
	}while(idade > 0);

	return 0;
}*/






/*Lembrem-se que em C não é possível fazer atribuição a um vetor de caracteres
usando o operador de atribuição =, devemos usar a função strcpy


Exemplos: 
char aux1[50], aux2[50];

strcpy(aux2, "Bom dia!");	// aux2 receberá o valor "Bom dia!"
strcpy(aux1, aux2);			// aux1 receberá o valor armazenado em aux1

*/
void consultaCategoria(int id, char categoria[TAM])
{
	if(id >= 5 && id <= 7) 
		strcpy(categoria, "Infantil A");
	else if(id >= 8 && id <= 10)
		strcpy(categoria, "Infantil B");
	else if(id >= 11 && id <= 13)
		strcpy(categoria, "Juvenil A");
	else if(id >= 14 && id <= 17)
		strcpy(categoria, "Juvenil A");
	else if(id >= 18)
		strcpy(categoria, "Adulto");
	else
		strcpy(categoria, "Indefinida");
}
