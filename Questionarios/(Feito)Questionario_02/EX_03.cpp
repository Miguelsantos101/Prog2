#include<stdio.h>

int main(){
    int tam, maior;

    scanf("%d", &tam);

    int L[tam];

    for(int alpha = 0; alpha < tam; alpha++){
        scanf("%d", &L[alpha]);
    }

    for(int beta = 1; beta < tam; beta++){
        if(L[0] > L[beta]){
            maior = true;
        }
        else if(L[0] <= L[beta]){
            maior = false;
            printf("false");
            break;
        }
    }

    if(maior){
        printf("true");
    }
}
