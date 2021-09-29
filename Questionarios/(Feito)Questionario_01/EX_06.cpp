#include<stdio.h>

int main(){
    int inicio, fim, soma = 0, alpha;

    scanf("%d %d", &inicio, &fim);

    if(inicio % 2 != 0){
        for(alpha = inicio; alpha <= fim; alpha += 2)
            soma += alpha;
    }
    else
        for(alpha = inicio+1; alpha <= fim; alpha += 2)
            soma += alpha;

    printf("%d\n", soma);
    return 0;
}
