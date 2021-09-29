#include<stdio.h>

int pot(int x, int n);

int main(){
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", pot(x,n));
    return 0;
}

int pot(int x, int n){
    int total = x;
    for(int alpha = 1; alpha < n; alpha++){
        total = x * total;
    }
    return total;
}
