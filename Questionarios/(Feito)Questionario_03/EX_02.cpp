#include<stdio.h>

double calcSalario(double valorhora, int numHoras);

int main(){
    int numFunc, numHoras;
    double valorhora;

    scanf("%d%lf%d", &numFunc, &valorhora, &numHoras);

    printf("%d %d %.2lf %.2lf", numFunc, numHoras, valorhora, calcSalario(valorhora, numHoras));
    return 0;
}

double calcSalario(double valorhora, int numHoras){
    double total = 0;
    if(numHoras <= 40){
        total = numHoras * valorhora;
        return total;
    }
    else if(numHoras > 40){
        total = 40 * valorhora + ((numHoras - 40) * (valorhora * 1.5));
        return total;
    }
    return total;
}
