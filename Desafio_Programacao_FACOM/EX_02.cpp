#include<stdio.h>

int main(){
    int T, A, W, C;

    while(scanf("%d%d%d%d", &T, &A, &W, &C) != EOF){
        if(A >= T * (float(C) / 100)){
            printf("critical\n");
        }
        else if(A >= T * (float(W) / 100) && A < T * (float(C) / 100)){
            printf("warning\n");
        }
        else{
            printf("OK\n");
        }
    }

    return 0;
}
