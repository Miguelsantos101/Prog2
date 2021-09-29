#include<stdio.h>

int potR(int x, int n);

int main(){
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", potR(x, n));
    return 0;
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
