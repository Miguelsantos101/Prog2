#include<stdio.h>

#define MAX 50

bool testetri(double a, double b, double c);

int main(){
    double a, b, c;
    bool x;
    char forma[MAX] = "formam um triângulo retângulo";
    char Nforma[MAX] = "não formam um triângulo retângulo";

    scanf("%lf%lf%lf", &a, &b, &c);

    x = testetri(a, b, c);

    if(x){
        printf("%.1lf %.1lf %.1lf %s", a, b, c, forma);
    }
    else{
        printf("%.1lf %.1lf %.1lf %s", a, b, c, Nforma);
    }

    return 0;
}

bool testetri(double a, double b, double c){
    if((c * c) == (a * a) + (b * b)){
        return true;
    }
    else{
        return false;
    }
}
