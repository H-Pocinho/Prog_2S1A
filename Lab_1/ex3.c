/*  Feito por: Henrique Alves Pocinho
                    IST199952

3. Recebe como parâmetros o ângulo de partida,em graus, velocidade inicial  e altura do teto, indica a que
distância deve estar o centro do cesto e imprime uma mensagem a indicar se o projétil bate ou não no teto.  */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14159265359
#define g 9.8

double ang,v,h,d; //v=velocidade h=altura do tecto

int main(){
    printf("Por favor introduza\n");
    printf("Angulo (em graus):");
    
    if (scanf("%lf",&ang) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    printf("Velocidade (em m/s):");
    if (scanf("%lf",&v) !=1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    printf("Altura do tecto (em metros):");
    if (scanf("%lf",&h) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
    }


    ang=(ang*pi)/180;
    d= (pow(v,2)*sin(2*ang))/g;

    printf("O cesto deve estar a %lf metros\n",d);
    if(h<(pow(v*sin(ang),2)/(2*g)))
        printf("O projectil bate no tecto\n");
    else
        printf("O projetil nao bate no tecto\n");
    return 0;
}
