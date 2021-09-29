#include<stdio.h>

#define MAX 500
#define TAM 5

int main(){
    int tamA, tamB, intAB[MAX], cont = 0;

    scanf("%d", &tamA);

    int discA[tamA];

    for(int alpha = 0; alpha < tamA; alpha++){
        scanf("%d", &discA[alpha]);
      //printf("valor digitado: %d\n", discA[alpha]);
    }

    scanf("%d", &tamB);

    int discB[tamB];

    for(int beta = 0; beta < tamB; beta++){
        scanf("%d", &discB[beta]);
      //printf("valor digitado: %d\n", discB[beta]);
    }

    for(int gamma = 0; gamma < tamA; gamma++){
        for(int delta = 0; delta < tamB; delta++){
            if(discA[gamma] == discB[delta]){
                intAB[cont] = discA[gamma];
                cont++;
            }
        }
    }

    if(cont != 0){
        for(int epsilon = 0; epsilon < cont; epsilon++){
        printf("%d ", intAB[epsilon]);
        }
        printf(" \n");
    }
    else{
        printf("vazia");
    }
    return 0;
}
