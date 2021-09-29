#include<stdio.h>

int potencia(int x, int n);

int main(){
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", potencia(x, n));
    return 0;
}

int potencia(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else if(n % 2 == 0){
        return potencia(x, n / 2) * potencia(x, n / 2);
    }
    else{
        return x * (potencia(x, n - 1));
    }
}
