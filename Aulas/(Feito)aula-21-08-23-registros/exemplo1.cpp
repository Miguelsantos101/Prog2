#include <stdio.h>

// definição de um tipo estrutura/registro/struct
struct tipoHora
{ 
	int hh;
	int mm;
	int ss; 
};

/* Recebe um horário no formato hh:mm:ss e o atualiza em 1 segundo, mostrando o novo 
horário na saída */
int main()
{
	tipoHora agora, prox;
	
	printf("Informe o horário atual (hh:mm:ss): "); 
	scanf("%d:%d:%d", &agora.hh, &agora.mm, &agora.ss);

	prox = agora;

	prox.ss = prox.ss + 1; 
	if (prox.ss == 60) 
	{
		prox.ss = 0;
		prox.mm = prox.mm + 1; 
		if (prox.mm == 60) 
		{
			prox.mm = 0;
			prox.hh = prox.hh + 1; 
			if (prox.hh == 24)
				prox.hh = 0;
		} 
	}
	printf("Próximo horário é %02d:%02d:%02d\n", prox.hh, prox.mm, prox.ss); 
	return 0;
}
