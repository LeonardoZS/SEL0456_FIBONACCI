#include <stdio.h>

// Leonardo Zaniboni Silva 11801049

int fibo(int i){

    if (i == 1 || i == 2){
        return 1;
    }

    return fibo(i-1) + fibo(i-2);

}


int main(){

    int qtd;


    printf("Digite a quantidade de termos da sequencia de Fibonacci : \n ");
    scanf("%d",&qtd);

    printf("A sequencia para %d termos e dada por : \n", qtd);

    for (int i = 1; i <= qtd; i++){printf("%d \n",fibo(i));}

    return 0;
}