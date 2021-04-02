/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void histomaker(float vector[100],int histo[],float intv,int n){
    float lim;
    int i,j=0;

    for ( lim = 0; lim < 1; lim=lim+intv)
    {
        
        for ( i = 0; i < n; i++)
        {
            if (lim<=vector[i] && vector[i]<(lim+intv))
            {
                histo[j]++;
            }
        }
        j=j+1;
    }
}


void histodrawer(int hist[9]){
    char linhas[9]={0};
    int i,j,k,maxi=0;

    for (i = 0; i <9; i++) 
    {
        if ( hist[i] > maxi ) 
        {
            maxi = hist[i];
        }
    }

    for ( i = maxi; i > 0; i=i-1)
    {
        
        for ( j = 0; j < 9; j++)
        {
            if (hist[j]==i && hist[j] != 0  )
            {
                linhas[j]=42;
            }
        }

        for ( k = 0; k <9; k++)
        {
            printf("%c ",linhas[k]);
        }
        printf("\n");
    }

    for ( i = 0; i < 9; i++)
    {
        printf("%d",hist[i]);
    }
    
}

int main(){
    float vect[100]={0};
    int histograma[9]={0,0,0,0,0,0,0,0,0};
    int i,n,k;
    float intv;
    srand(time(NULL));


    printf("Introduza n (nmr de valores a ser gerados):\n");
    if (scanf("%d", &n) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    printf("Introduza o numero de divisões (k)\n");
    do
    {   
        if (scanf("%d", &k) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
        if (k>=10)
        {
            printf("Introduza novamente\n");
        }
    } while (k>=10);
    

    for ( i = 0; i < n; i++)
    {
        vect[i]=(rand() / ((double) RAND_MAX));
    }
    intv=(1 /(float) k);

    histomaker(vect, histograma, intv, n);
    histodrawer(histograma);
    return 0;
}