#include <stdio.h>

int main(){
    int prod = 1, sum = 0, temp;
    FILE * fp;
    fp = fopen ("input.txt", "r");
    while(fscanf(fp, "%d", &temp) != EOF){
        if (temp%2==0) prod *= temp;
        else sum += temp;
    }
    printf("%d\n%d", prod, sum);
 
    return 0;
}