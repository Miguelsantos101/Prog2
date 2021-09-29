#include<stdio.h>

int piso_log2(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", piso_log2(n));
    return 0;
}

int piso_log2(int n){
    int cont = 0;

    if(n == 1){
        return cont;
    }
    else{
        return cont += 1 + piso_log2(n / 2);
    }
}
