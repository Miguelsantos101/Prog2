#include<stdio.h>

int main(){
    int tam;
    int alpha,beta;
    int crescente;

    
    fflush(stdin);
    scanf("%d", &tam);

    int L[tam];

    for(alpha = 0; alpha < tam; alpha++){
        scanf("%d", &L[alpha]);
    }

    for(beta = 0; beta < tam - 1; beta++){
        if(L[beta] < L[beta + 1]){
            crescente = true;
        }
        if(L[beta] >= L[beta + 1]){
            crescente = false;
            printf("falso");
            break;
        }
    }

    if(crescente){
        printf("verdadeiro");
    }

    return 0;
}
