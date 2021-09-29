#include<stdio.h>

int main()
{
    int x;
    int y;
    int exp;
    int alpha = 1;

    printf("\nDigite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    if(y == 0)
    {
        exp = 0;
    }
    else if(y == 1)
    {
        exp = x;
    }
    else
    {
        for (alpha; alpha < y; alpha += 1)
            {
                if(alpha == 1)
                {
                    exp = x * x;
                }
                else if(alpha > 1)
                {
                    exp = exp * x;
                }
            }
    }

    printf("\nO resultado da exponenciacao e: %d", exp);

}
