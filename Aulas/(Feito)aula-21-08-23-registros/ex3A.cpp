/* Recebe duas datas (dd/mm/aaaa) e calcula o numero de dias decorridos entre elas*/
#include <stdio.h>
#include <math.h>   /* floor (x) - calcula o piso do número x, 
						abs(x) - calcula o valor absoluto de x*/

// definição de um tipo estrutura/registro/struct
struct tipoData
{
	int dia, mes, ano;
};


int fAno(int ano, int mes)
{
	if(mes <= 2){
		ano -= 1;
	}
	return ano;
}

int gMes(int mes)
{
	if(mes <= 2)
		mes += 13;
	else
		mes += 1;
	
	return mes;
}

int calculaN(tipoData data)
{
	int N;
	N = floor((1461 * fAno(data.ano, data.mes)) / 4) + floor((153 * gMes(data.mes) / 5)) + data.dia;
	return N;
}

int main()
{
	int totalDias;
	tipoData data1, data2;
	
	printf("\nDigite a data 1: ");
	scanf("%d:%d:%d", &data1.dia, &data1.mes, &data1.ano);

	printf("Digite a data 2: ");
	scanf("%d:%d:%d", &data2.dia, &data2.mes, &data2.ano);

	totalDias = abs(calculaN(data2) - calculaN(data1));
	printf("O tempo decorrido entre as duas datas e de: %d dias", totalDias);

	return 0;
}
