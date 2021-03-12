/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
8. Escreva um programa que calcule uma gama de valores
de ângulos aceitáveis de forma que o projétil caia dentro do cesto para uma dada distância e velocidade inicial.
Assim, o programa deve ler como parâmetros de entrada a distância , a velocidade inicial , o diâmetro do
cesto  e imprimir a gama de ângulos (em graus). */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g 9.8
#define pi 3.14159265359

double d,v,diam,dmax,angf,angi;
int cont=0;

int main(){
    while (cont==0){
        printf("Introduza a distancia: ");
        if (scanf("%lf", &d) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
        printf("Introduza a velocidade inicial: ");
        if (scanf("%lf", &v) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
        printf("Introduza o diamentro do cesto em metros: ");
        if (scanf("%lf", &diam) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
        dmax=pow(v,2)/g; 
        if (dmax<(d-diam/2)){
            printf("A bola não chega ao cesto\n");
        }   
        else if (dmax<=(d+diam/2)){
            angf=45;
            angi=(asin(((d-diam/2)*g)/pow(v,2)))/2;
            angi=(angi*180)/pi;
            printf("O angulo inicial e %lf e o angulo final e %lf\n",angi,angf);
        }
        else{
            angf=(asin(((d+diam/2)*g)/pow(v,2)))/2;
            angf=(angf*180)/pi;
            angi=(asin(((d-diam/2)*g)/pow(v,2)))/2;
            angi=(angi*180)/pi;
            printf("O angulo inicial e %lf e o angulo final e %lf\n",angi,angf);
        }
        printf("Se quiser repetir introduza 0: ");
        if (scanf("%d", &cont) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
    }
     return 0;

}
