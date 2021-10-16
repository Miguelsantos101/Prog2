#include<stdio.h>


int main(){
    int C, n;

    scanf("%d", &C);
    
    for(int alpha = 0; alpha < C; alpha++){
        scanf("%d", &n);
        int T = 0;

        for(int beta = 1; beta <= n; beta++){
            int totalp = 0;

            for(int gamma = 1; gamma <= beta; gamma++){
                if(beta % gamma == 0){
                    totalp++;
                }
            }

            if(totalp % 2 == 0){
                T++;
            }

        }
        printf("%d\n", T);
    }
}
