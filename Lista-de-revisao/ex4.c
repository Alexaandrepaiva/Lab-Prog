#include <stdio.h>

int prod_even(){

}

int sum_odd(){
    
}

int main(){
    int mcnt = 0, fcnt = 0;
    float masc = 0, fem = 0, temp;
    char chr;
    FILE * fp;
    fp = fopen ("input.txt", "r");
    while(fscanf(fp, "%c %f\n", &chr, &temp) != EOF){
        if (chr == 'M'){
            masc += temp;
            mcnt++;
        }
        if (chr == 'F'){
            fem += temp;
            fcnt++;
        }
    }
    masc = masc*1.0/mcnt;
    fem = fem*1.0/fcnt;
    if (masc > fem) printf("M %.1f", masc);
    else printf("F %.1f", fem);
 
    return 0;
}