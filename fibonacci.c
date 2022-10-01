#include <stdio.h>

// Leonardo Zaniboni Silva 11801049

int main(){

    int qtd;
    int a = 1 ,b = 0;
    int aux;

    printf("Digite a quantidade de termos da sequencia de Fibonacci : \n ");
    scanf("%d",&qtd);

    printf("A sequencia para %d termos e dada por : \n", qtd);
    for(int i = 1; i <= qtd; i++)
    {
      printf("%d \n", a);
      aux = a;
      a = b + a;
      b = aux;
    }

    return 0;
}