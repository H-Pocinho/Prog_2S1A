/*  Feito por: Henrique Alves Pocinho
                    IST199952

1. Escreva um programa que receba o número de total de segundos como um inteiro e imprima o número total de
horas, minutos e segundos correspondente. Não utilize quaisquer condições ou ciclos. */

#include <stdio.h>
#include <stdlib.h>

int s,m=0,h=0;

int main(){
    printf("Introduza o numero de segundos:\n");
    if (scanf("%d", &s) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }
    h=s/3600;
    s -=3600*h;
    m=s/60;
    s-=60*m;
    printf("%d horas %d minutos %d segundos \n", h, m,s);
    return 0;
}
