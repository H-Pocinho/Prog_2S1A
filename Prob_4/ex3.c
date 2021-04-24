/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int max(int *lista,int N){
    int i,n=0; 

    for ( i = 0; i < N; i++)
    {
        if (*(lista+i)>n)
        {
            n=*(lista+i);
        }
    }
    return n;
}

int min(int *lista,int N){
    int i,n=2147483647; 

    for ( i = 0; i < N; i++)
    {
        if (*(lista+i)<n)
        {
            n=*(lista+i);
        }
    }
    return n;
}

float media(int *lista,int N){
    int i;
    float f=0; 

    for ( i = 0; i < N; i++)
    {
        f=*(lista+i)+f;

    }  
    f=f/N;
    return f;
}

float desvioPadrao(int *lista,int N,float media){
    int i;
    float soma=0,dp=0;
    for ( i = 0; i < N; i++)
    {
        soma=pow(*(lista+i)-media,2)+soma;
    }
    dp=sqrt(soma/N);
    return dp;
}

void distaDesvioPadrao(int *lista,int N,float media,float dp){
    int i;
    for ( i = 0; i < N; i++)
    {
        if (abs(*(lista+i)-media)>dp)
        {
            printf("O numero %d está bastante desviado\n",*(lista+i));
        }
        
    }

}




int main(){
    int N,i,M,m;
    float med,dp;
    int *nmrs;

    printf("Introduza N (numero de numeros):\n");
    if (scanf("%d",&N) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    

    nmrs = (int*) calloc(N,sizeof(int));
    

    if (nmrs == NULL){
        printf("Erro de alocação de memória\n");
    }else{
        printf("Memória alocada com sucesso\n");
    }
    
    
    for (i = 0; i < N; i++)
    {
        printf("Introduza o numero %d:\n",i+1);
        scanf("%d",nmrs+i);
    } 
    M=max(nmrs,N);
    printf("O máximo é %d\n",M);

    m=min(nmrs,N);
    printf("O minimo é %d\n",m);

    med=media(nmrs,N);
    printf("A média é %f\n",med);

    dp=desvioPadrao(nmrs,N,med);
    printf("O desvio padrão é %f\n",dp);

    distaDesvioPadrao(nmrs,N,med,dp);
    
    free(nmrs);
    return 1;
}