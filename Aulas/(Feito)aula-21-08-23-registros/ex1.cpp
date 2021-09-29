/* Recebe uma data no formato dd:mm:aaaa e a atualiza em 1 dia, mostrando a nova 
data na saída */
#include <stdio.h>

// definição de um tipo estrutura/registro/struct
struct tipoData
{
	int dia, mes, ano;
};


/* Recebe um horário no formato hh:mm:ss e o atualiza em 1 segundo, mostrando o novo 
horário na saída */
int main()
{
	tipoData data, prox;
	
	printf("Informe uma data (dd/mm/aa): ");
	scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
	
	// armazenado nova data e incrementando o dia em 1
	prox = data; 
	prox.dia++;

	if (prox.dia > 31 ||
	   (prox.dia == 31 && (prox.mes == 4 || prox.mes == 6 ||
							prox.mes == 9 || prox.mes == 11)) || 
	   (prox.dia == 30 && prox.mes == 2) ||
	   (prox.dia == 29 && prox.mes == 2
					   && (prox.ano % 400 != 0 &&
						   	(prox.ano % 100 == 0 ||
						   	 prox.ano % 4 != 0))))
	{    
		prox.dia = 1; 
		prox.mes++;
		if (prox.mes > 12) 
		{
			prox.mes = 1;
			prox.ano++;
		} 
	}

	printf("%02d/%02d/%02d\n", prox.dia, prox.mes, prox.ano); 
	return 0;
}
