#include<stdio.h>

int main(){
    int x, y, *p;
    printf("1 %d %d\n", x, y);

    y = 1;
    printf("2 %d %d\n", x, y);

    p = &y;
    printf("3 %d %d\n", x, y);

    x = *p;
    printf("4 %d %d\n", x, y);

    x = 3;
    printf("5 %d %d\n", x, y);

    (*p)++;
    printf("6 %d %d\n", x, y);

    --x;
    printf("7 %d %d\n", x, y);

    p = &x;
    printf("8 %d %d\n", x, y);

    (*p) = (*p) + (2*y);
    printf("9 %d %d\n", x, y);

    printf("final = %d", (x+y));
}
