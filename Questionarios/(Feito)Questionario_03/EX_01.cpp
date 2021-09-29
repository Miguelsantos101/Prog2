#include<stdio.h>

#define MAX 10

void mediaAR(float media, float notaAP, char mensagem[MAX]);

int main(){
    float notaAP, media;
    char mensagem[MAX] = "Aprovado";

    scanf("%f%f", &notaAP, &media);
    mediaAR(media, notaAP, mensagem);

    return 0;
}

void mediaAR(float media, float notaAP, char mensagem[MAX]){
    char reprovado[MAX] = "Reprovado";

    if(media >= notaAP){
        printf("%.1f %s", media, mensagem);
    }
    else if(media < notaAP){
        printf("%.1f %s", media, reprovado);
    }
}
