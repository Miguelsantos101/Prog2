#include<stdio.h>
#include<math.h>

int main(){
    int numero, digito, temp, quant = 0, tamNum;

    scanf("%d %d", &numero, &digito);
    
    if(numero != 0){
        tamNum = floor(log10(abs(numero))) + 1;
        for(int alpha = 0; alpha < tamNum; alpha++){
            temp = numero % 10;
            if(digito == temp)
                quant += 1;
            numero = numero / 10;
        }
    }
    else if(numero == 0 && digito == 0)
        quant = 1;
    else
        quant = 0;
        
    printf("%d\n", quant);

    return 0;
}
