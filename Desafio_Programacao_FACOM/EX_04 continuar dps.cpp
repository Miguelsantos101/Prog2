#include<stdio.h>

int main(){
    int n;

    do{
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        int presentes[n*2];

        int caro = 0, barato = 0; 
        for(int alpha = 0; alpha < n*2; alpha++){
            scanf("%d", &presentes[alpha]);
        }

        if(n > 1){
            caro = presentes[0] + presentes[n*2 - 1];
            barato = presentes[((n*2 - 1) / 2) + 1] + presentes[((n*2 - 1) / 2)];
        }
        else{
            caro = presentes[0] + presentes[n*2 - 1];
            barato = caro;
        }

        if(caro > barato){
            printf("%d %d\n", caro, barato);
        }
        else{
            printf("%d %d\n", barato, caro);
        }
    
    }while(n != 0);
}
