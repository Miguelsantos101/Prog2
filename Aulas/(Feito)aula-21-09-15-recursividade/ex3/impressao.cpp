#include<stdio.h>

void impressao(int n);

int main(){
    int n;
    scanf("%d", &n);
    impressao(n);
    return 0;
}

void impressao(int n){
    if(n <= 0){
        return;
    }
    impressao(n - 1);
    printf("%d ", n);
}
