/*  Feito por: Henrique Alves Pocinho
                    IST199952

4. Escreva um programa para ler, separadamente, três caracteres correspondentes a dígitos decimais (algarismos)
e escreva o dobro do número inteiro cujos algarismos são os caracteres lidos. */

#include <stdio.h>
#include <stdlib.h>

int n[ 3 ] = {0,0,0}; 
int i,totaln;

int intro();

int main () {   
   printf("Coloque os numeros da direita para a esquerda aka. se quiser 189 introduza 9 8 1\n");
   for (i = 0; i < 3; i++ ) {
      n[i]=intro();
   }
   totaln=2*(n[0]+10*n[1]+100*n[2]);
   printf("O resultado final e: %d\n",totaln);
   return 0;
}


int intro(){
   char n;
   int x;
   do{
      printf("Introduza um caracter entre 0 e 9:\n");
      if(scanf("%c",&n) != 1){
         printf("Failled to read STDIN!\n");
         exit(0);
      }
      fflush(stdin);
      x = n - '0';
   } while (x<0||x>9);
    

    return x;
}