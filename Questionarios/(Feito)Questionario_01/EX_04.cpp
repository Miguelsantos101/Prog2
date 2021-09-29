#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c,x1,x2,delta;

    fflush(stdin);
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a != 0){
        delta = pow(b, 2) - 4 * a * c;
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        if(delta < 0)
            printf("A equação não possui raízes reais");
        else
            printf("%.2lf, %.2lf", x1, x2);
    }
    return 0;
}
