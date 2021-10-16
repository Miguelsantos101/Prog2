#include<stdio.h>
#include<string.h>
#define MAX 1000

struct tBaralho{
    char S[MAX];
};


int main(){
    int n;

    scanf("%d", &n);

    tBaralho cartas[n];

    for(int alpha = 0; alpha < n; alpha++){
        scanf(" %[^\n]s", cartas[alpha].S);
    }

    for(int beta = 0; beta < n; beta++){
        int q = 0, j = 0, k = 0, a = 0; 

        for(int gamma = 0; gamma < strlen(cartas[beta].S); gamma++){
            
            if(cartas[beta].S[gamma] == 'Q'){
                q++;
            }
            else if(cartas[beta].S[gamma] == 'J'){
                j++;
            }
            else if(cartas[beta].S[gamma] == 'K'){
                k++;
            }
            else if(cartas[beta].S[gamma] == 'A'){
                a++;
            }
        }

        if(q > 0 && j > 0 && k > 0 && a > 0){
            printf("Aaah muleke\n");
        }
        else{
            printf("Ooo raca viu\n");
        }
    }
    return 0;
}
