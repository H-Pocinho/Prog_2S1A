/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
2. Escreva um programa que leia dois tempos, cada um especificado em horas (0-23), minutos (0-59) e (0-59)
segundos; sendo o primeiro tempo maior do que o segundo, determine a diferença entre eles e escreve-a, também,
em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>

#define ValHora(i) (((i>23) || (i<0)) ? 0 : 1)
#define ValMS(i) (((i>59) || (i<0)) ? 0 : 1)

int s1,s2,sf,m,h;

int IValores(int h, int m, int s);

int main(){
   do{
       printf("Introduza o primeiro tempo no formato: Horas Minutos Segundos\n"); 
       s1=IValores(h,m,s1); 
       printf("Introduza o segundo tempo no formato: Horas Minutos Segundos\n");
       s2=IValores(h,m,s2); 
       sf=s1-s2;
   }while(sf<=0);
   h=sf/3600;
   sf -=3600*h;
   m=sf/60;
   sf-=60*m;
   printf("Diferenca temporal: %d Horas %d Minutos %d Segundos \n",h,m,sf);
   return 0;
}


int IValores(int h, int m, int s){
    do{
        if(ValHora(h)*ValMS(m)*ValMS(s)==0){
            printf("Por favor introduza os valores de novo \n");
        }
        s=60,m=60,h=60;    
        printf("Horas: ");
        if (scanf("%d",&h) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }

        printf("Minutos: ");
        if (scanf("%d",&m) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }

        printf("Segundos: ");
        if (scanf("%d",&s) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
    }while(ValHora(h)*ValMS(m)*ValMS(s)==0);
    s=3600*h+60*m+s;
    return s;
}