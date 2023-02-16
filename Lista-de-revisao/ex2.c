#include <stdio.h>

int main(){
    int number;
    int i = 2;

    printf("Digite um numero natural: ");
    scanf("%d", &number);
    recursivo(i, number);

    return 0;
}

void recursivo(int i, int number){
    if ( i < number ) {
        printf("%d ", i);
        recursivo(i+2, number);
    } else {
        return;
    }
}