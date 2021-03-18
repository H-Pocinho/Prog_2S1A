/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
3. Desenvolva um programa que imprime um triângulo formado pelo carácter *.
 O programa deve começar por ler do teclado a altura do triângulo
(medida em termos do número de colunas). */


#include <stdio.h>
#include <stdlib.h>

int size;

int main(){
    printf("Introduza o tamanho: ");
    if (scanf("%d", &size) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = (size-2) ; 0 <= i; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
   return 0; 
}