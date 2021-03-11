#include <stdio.h>

int m;

int main(){
    do{
        printf("Introduza um mes (numero entre 1 e 12): ");
        scanf("%d",&m);
        if ( m<1 || m>12 ){
            printf("Numero invalido\n");
        }
    } while ( m<1 || m>12 );
    
 return 0;   
}