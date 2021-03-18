/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
2. Desenvolva um programa que lê do teclado um número inteiro entre 1 e 12, correspondente
a um mês do ano, e imprime o número de dias desse mês (assuma ano bissexto). A leitura
apenas termina quando o utilizador inserir um número que não esteja dentro da gama de
valores admissíveis.  */


#include <stdio.h>
#include <stdlib.h>

int m, cs, ano;

int main(){
    do{
        printf("Introduza um mes (numero entre 1 e 12): ");
        if (scanf("%d",&m) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
        if ( m<1 || m>12 ){
            printf("Numero invalido\n");
        }
    } while ( m<1 || m>12 );

    if ( (m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12))
    	cs=0;
    else if (m==2)
        cs=2;
    else
        cs=1;
    

    switch(cs){
        case 0:
            printf("O mes tem 31 dias\n");
            break;
        case 1:
            printf("O mes tem 30 dias\n");
            break;
        case 2:
            printf("Introduza o ano: ");
            if (scanf("%d", &ano)!=1){
                printf("Failled to read STDIN!\n");
                exit(0);
            }
            if ((((ano%4 == 0) && (ano%100 != 0) ) || (ano%400 == 0))==1)
                printf("O mes tem 29 dias\n");
            else
                printf("O mes tem 28 dias\n");
        break;
    }
    
 return 0;   
}