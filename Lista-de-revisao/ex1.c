#include <stdio.h>

int main()
{
    int number;
    int i = 2;

    printf("Digite um numero natural: ");
    scanf("%d", &number);

    while ( i < number) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}