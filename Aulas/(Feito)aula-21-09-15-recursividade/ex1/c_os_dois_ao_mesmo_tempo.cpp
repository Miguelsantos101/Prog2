#include<stdio.h>

int pot(int x, int n);
int potR(int x, int n);

int main(){
    int x, n;
    scanf("%d %d", &x, &n);
    printf("funcao nao recursiva:\t%d\n", pot(x,n));
    printf("funcao recursiva:\t%d", potR(x, n));
    return 0;
}

int pot(int x, int n){
    int total = x;
    for(int alpha = 1; alpha < n; alpha++){
        total = x * total;
    }
    return total;
}

int potR(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        return x * potR(x, n - 1);
    }
}
