#include<stdio.h>
#include<math.h>

int maxfator(int numero);

int main(){
    int n;

    scanf("%d", &n);

    printf("%d %d", n, maxfator(n));

    return 0;
}

int maxfator(int numero){
    int divisor = abs(numero);
    numero = abs(numero);

    for(int alpha = numero - 1; alpha > 0; alpha--){
        if(numero % alpha == 0){
            divisor = alpha;
            break;
        }
    }
    return divisor;
}
