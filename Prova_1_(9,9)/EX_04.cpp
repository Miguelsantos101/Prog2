#include<stdio.h>

#define MAX 101

float soma(float n);

int main(){
    int k, v[MAX];

    scanf("%d", &k);

    for(int alpha = 0; alpha < k; alpha++){
        scanf("%d", &v[alpha]);
    }

    for(int beta = 0; beta < k; beta++){
        printf("%.2f\n", soma(v[beta]));
    }

    return 0;
}

float soma(float n){

    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 0;
    }
    else{
        return soma(n - 1) + ((n * n - 1) / n);
    }
}
