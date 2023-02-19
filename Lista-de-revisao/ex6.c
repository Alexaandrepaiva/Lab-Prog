#include <stdio.h>

int main(){
    int n;

    printf("Entre com o numero: ");
    scanf("%d", &n);

    int fib;
    int fib1 = 0;
    int fib2 = 1;
    int i;

    while ( i < n){
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        i++;
    }

    printf("%d", fib1);

    return 0;
}