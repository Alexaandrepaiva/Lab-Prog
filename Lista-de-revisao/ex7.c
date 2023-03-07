#include <stdio.h>
#include <time.h>
#define SEED time(NULL)

void troca(int* a, int* b) {
   int aux = *a;
   *a = *b;
   *b = aux;
}

void bolha (int *primeiro, int *ultimo) {
   int naoTrocou;
   int *posAtual;
   for (; ultimo > primeiro; --ultimo) {
      naoTrocou = 1;
      for (posAtual = primeiro; posAtual < ultimo; ++posAtual) {
         if (*posAtual > *(posAtual+1)) {
            troca (posAtual, posAtual+1);
            naoTrocou = 0;
         }
      }
      if (naoTrocou) return;
   }
}

void exibir(int *primeiro, int n) {
   int i = 0;
   for (; i < n; i++) {
      printf("%d ", primeiro[i]);
   } 
}

main() {
    int  n;
    int *v;

    printf("Entre com n: ");
    scanf("%d", &n);

    v = (int*)malloc(n*sizeof(int));

    srand(SEED);
    for (int i = 0; i < n; i++){
        v[i] = rand();
    }

    printf("Numeros aleatorios gerados: ");
    exibir(v, n);

    bolha(v, &v[n-1]);

    printf("\nVetor ordenado: ");
    exibir(v, n);
}