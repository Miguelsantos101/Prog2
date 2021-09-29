#include<stdio.h>
#include<math.h>

int main(){
    double lado1, lado2, lado3, perimetro, semip, area;

    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

    perimetro = lado1 + lado2 + lado3;
    semip = (lado1 + lado2 + lado3) / 2;

    area = sqrt(semip * (semip-lado1) * (semip - lado2) * (semip - lado3));

    printf("Lados = %5.2lf, %5.2lf, %5.2lf\n", lado1, lado2, lado3);
    printf("Perímetro = %5.2lf\n", perimetro);
    printf("Área = %5.2lf\n\n", area);
    return 0;
}
