#include<stdio.h>

int piso_log2(int n);

int main(){
    int n;

    scanf("%d", &n);

    printf("%d", piso_log2(n));

    return 0;
}

int piso_log2(int n){
    int exp = 2, cont = 0;
    for(int alpha = 0; alpha < n; alpha++){
        if(exp <= n){
            exp = exp * 2;
            cont++;
        }
        
    }
    return cont;
}
