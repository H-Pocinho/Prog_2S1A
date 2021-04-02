/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void FlagMultipleNumbers(int i, int j , int numbers[]){
    if (i>j && numbers[i]%j==0)
    {
        numbers[i]=0;
    }
}


void SieveOfEratosthenes(int n){
int i,j,limit;
int numbers[1000];

    limit=sqrt(n);


    for ( i = 0; i < n; i++)
    {
        numbers[i]=i+2;
    }


    for ( j = 2; j < limit; j++)
    {
        for ( i = 0; i < n; i++)
        {
            FlagMultipleNumbers(i,j,numbers);
        }
    }
    for ( i = 0; i < (n-1); i++)
    {
        if (numbers[i]!=0)
        {
            printf("%d\n",numbers[i]);
        }
        
    }
    
}



int main(){
    int n;

    printf("Introduza o numero maximo:\n");
    if (scanf("%d", &n) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }
    SieveOfEratosthenes(n);
    return 0;
}