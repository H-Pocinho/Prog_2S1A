/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
5. Radiação eletromagnética pode ser classificada em uma de sete categorias de acordo com a sua frequência. 
Escreva um programa que recebe a frequência e imprime o nome da classe
correspondente. Use a directiva #define. */

#include <stdio.h>
#include <math.h>


#define radiowaves(i) ((i>=(3*pow(10,9))) ? 0 : 1)
#define microwaves(i) (((i<(3*pow(10,9)))||(i>=(3*pow(10,12)))) ? 0 : 1)
#define infrared(i) (((i<(3*pow(10,12)))||(i>=(4.3*pow(10,14)))) ? 0 : 1)
#define visible(i) (((i<(4.3*pow(10,14)))||(i>=(7.5*pow(10,14)))) ? 0 : 1)
#define ultraviolet(i) (((i<(7.5*pow(10,14)))||(i>=(3*pow(10,17)))) ? 0 : 1)
#define xRays(i) (((i<(3*pow(10,17)))||(i>=(3*pow(10,19)))) ? 0 : 1)


float f;

int main(){
    printf("Introduza uma frequencia:");
    scanf("%f",&f);
    if (radiowaves(f)==1){
        printf("E uma onda de radio\n");
    }
    else if (microwaves(f)==1){
        printf("E uma micro-onda\n");
    }
    else if (infrared(f)==1){
        printf("E uma radiacao infravermelha\n");
    }
    else if (visible(f)==1){
        printf("E uma radiacao visivel\n");
    }
    else if (ultraviolet(f)==1){
        printf("E uma radiacao ultravioleta\n");
    }
    else if (xRays(f)==1){
        printf("E uma radiacao raio-x\n");
    }
    else{
        printf("E uma radiacao gamma\n");
    }
    return 0;
}