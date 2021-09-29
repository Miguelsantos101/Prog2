#include<stdio.h>

int ciclo(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", ciclo(n));
    return 0;
}

int ciclo(int n){
    int comp = 0;
    
    if(n == 1){
        printf("%d ", n);
        comp += 1;
    }
    else if(n % 2 == 0){
        printf("%d ", n);
        return comp += 1 + ciclo(n / 2);
    }
    else{
        printf("%d ", n);
        return comp += 1 + ciclo(n * 3 + 1);
    }

    return comp;
}
