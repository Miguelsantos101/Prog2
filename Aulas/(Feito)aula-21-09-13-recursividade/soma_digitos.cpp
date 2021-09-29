#include<stdio.h>



int somadigitos(int n)
{
	if(n < 10)
		return n;
	else
		return (n%10) + somadigitos(n/10) ;

}


int somadigitos2(int n)
{
	int soma;
	if(n < 10)
		soma = n;
	else
		soma = (n%10) + somadigitos(n/10) ;
	
	return soma;
}


int main()
{
	int n;

	scanf("%d", &n);

	printf("%d\n", somadigitos(n));

	return 0;
}
