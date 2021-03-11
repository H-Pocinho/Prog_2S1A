/*  Feito por: Henrique Alves Pocinho
                    IST199952
    Recebe como parâmetros o ângulo de partida,em graus, velocidade inicial  e altura do teto, indica a que
distância deve estar o centro do cesto e imprime uma mensagem a indicar se o projétil bate ou não no teto.  */

#include <stdio.h>
#include <math.h>
#define pi 3.14159265359
#define g 9.8

float ang,v,h,d; //v=velocidade h=altura do tecto

int main(){
    printf("Por favor introduza\n");
    printf("Angulo (em graus):");
    scanf("%f",&ang);
    printf("Velocidade (em m/s):");
    scanf("%f",&v);
    printf("Altura do tecto (em metros):");
    scanf("%f",&h);

    ang=(ang*pi)/180;
    d= (pow(v,2)*sin(2*ang))/g;

    printf("O cesto deve estar a %f metros\n",d);
    if(h<(pow(v*sin(ang),2)/(2*g)))
        printf("O projectil bate no tecto\n");
    else
        printf("O projetil nao bate no tecto\n");
    return 0;
}
