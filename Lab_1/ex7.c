/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
7. Escreva um programa para ler um número real positivo e que realize o arredondamento para a n-ésima casa
decimal, com n introduzido pelo utilizador (n assume valores entre 1 e 7). Realize o programa sem recurso às
funções de biblioteca do C e utilize o printf para produzir o mesmo valor. */

#include <stdio.h>
#include <stdlib.h>


int main(){
    float nrp;
    int n=1;
    printf("Introduza um numero real positivo: ");
    if (scanf("%f", &nrp) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    do{
        if (n<1||n>7){
            printf("Valor invalido\n");
        }
        printf("Introduza o numero de casas decimais (entre 1 e 7):\n");
        
        if (scanf("%d",&n) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
    } while (n<1||n>7);
    printf("%.*f\n", n, nrp); 
    return 0;
}
