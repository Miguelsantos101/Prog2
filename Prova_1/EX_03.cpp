#include<stdio.h>

int A(int m, int n);

int main(){
    int x;
    
    x = A(2,0);

    return 0;
}

int A(int m, int n){
    int count = 0;
    
    if (m == 0) {
        return n + 1;
    }
    else if (n == 0) {
        printf("1");
        return A(m - 1, 1);
    }
    else {
        printf("2");
        return A(m - 1, A(m, n - 1));
    }
}
