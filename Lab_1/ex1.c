/*  Feito por: Henrique Alves Pocinho
                    IST199952
    Converte segundos para  horas e minutos*/

#include <stdio.h>

int s,m=0,h=0;

void main(){
    printf("Introduza o numero de segundos:\n");
    scanf("%d", &s);
    h=s/3600;
    s -=3600*h;
    m=s/60;
    s-=60*m;
    printf("%d horas %d minutos %d segundos \n", h, m,s);
};
