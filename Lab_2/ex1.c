#include <stdio.h>
#include <stdlib.h>

int num,soma=0,parcelas=0;
float media;

int main(){
    printf("Introduza um numero\n");
    if (scanf("%d", &num) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }
    printf("Os divisores sao\n");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n",i);
            soma=soma+i;
            parcelas=parcelas+1;
        }
    }
    media = (float) soma/parcelas;
    printf("\nA media dos divisores e:\n");
    printf("%.3f\n",media);
return 0;
}
