/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */

#include <stdio.h>
#include <stdlib.h>


unsigned long long fatorial(int n){
    unsigned long long fact = 1;
    int i;

    if (n < 0)
        printf("Erro, valor invalido");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
    }
    return fact;
}

unsigned long long combinacao(int n,int k){
    unsigned long long a=fatorial(n);
    unsigned long long b=fatorial(k);
    unsigned long long c=fatorial(n-k);
    return (a/(b*c));
}

int main() {
    int M,i,k;
    
    printf("Introduza um numero: ");
    

    if (scanf("%d", &M) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    for ( i = 0; i < M; i++){
        for(k=0; k<=i; k++){
            printf("%llu ",combinacao(i,k));
        }
        printf("\n");
    }
    return 0;
}