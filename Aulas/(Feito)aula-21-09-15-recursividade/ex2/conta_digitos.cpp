#include<stdio.h>

int contadig(int n);

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", contadig(n));
	return 0;
}

int contadig(int n){
	if(n < 10){
		return 1;
	}
	else{
		return contadig(n / 10) + 1;
	}
}
