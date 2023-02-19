#include <stdio.h>
int fibonacci(int n){
    if ( n == 0 || n == 1 ) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int n;

    printf("Entre com o numero: ");
    scanf("%d", &n);

    int answer = fibonacci(n);

    printf("%d", answer);
    
    return 0;
}