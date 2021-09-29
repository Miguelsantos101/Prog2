#include<stdio.h>

#define MAX 20

int conta(int n, int *W, int k);

int main(){
    int n, W[MAX], k;

    scanf("%d", &n);

    for(int alpha = 0; alpha < n; alpha++){
        scanf("%d", &W[alpha]);
    }

    scanf("%d", &k);

    printf("%d", conta(n, W, k));

    return 0;
}

int conta(int n, int *W, int k){
    int cont = 0;

    if(n == 0){
        return cont;
    }
    else if(n == 1 && W[0] == k){
        return cont += 1;
    }
    else{
        if(W[n - 1] == k){
            return cont += 1 + conta(n - 1, W, k);
        }
        return conta(n - 1, W, k);
    }
}
