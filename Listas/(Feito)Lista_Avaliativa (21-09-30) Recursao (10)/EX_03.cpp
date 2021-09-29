#include<stdio.h>

int mdc(int a, int b);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mdc(a, b));
    return 0;
}

int mdc(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return mdc(b, a % b);
    }

}
