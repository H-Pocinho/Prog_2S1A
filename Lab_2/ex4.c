#include <stdio.h>
#include <stdlib.h>


int introduzir(char Noriginal[]){
    int n,i;
    printf("Introduza o numero de algarismos:\n");
    if (scanf("%d", &n) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }
    printf("Introduza o numero:\n");
    for ( i = 0; i <= n; i++)
    {
       scanf("%c", &Noriginal[i]);
    }
    return n;
}   

void codificar(char Noriginal[100],char Ncoded[],int n){
    int i,r=0,m=0;
    char posit=Noriginal[1];
    for ( i = 1; i <= (n+1); i++)
    {
        if (Noriginal[i]==posit)
        {
            r++;
        }
        if (Noriginal[i]!=posit)
        {
            do
            {
                if (r>9)
                {
                    Ncoded[m]='9';
                    Ncoded[m+1]=posit;
                }
                else
                {
                    Ncoded[m]=r+'0';
                    Ncoded[m+1]=posit;
                    posit=Noriginal[i];
                }
                r=r-9;
                m=m+2;
            } while (r>0);
            r=1;
        }
    }
};

void descodificar(char Ncoded[100],char Ndecoded[]){
    int i=0,j=0,posit=0,a;
    for ( i = 0; i <= 100; i=i+2)
    {
        a=(int)Ncoded[i]- 48;
        if (Ncoded[i]==0)
        {
            return;
        }
        for ( j = 0; j < a; j++)
        {
            Ndecoded[posit]=Ncoded[(i+1)];
            posit++;
        }    
    }
};


int main(){
    int i,n;
    char Noriginal[100]={0};
    char Ncoded[100]={0};
    char Ndecoded[100]={0};
    n=introduzir(Noriginal);
    codificar(Noriginal,Ncoded,n);
    descodificar(Ncoded,Ndecoded);


    for ( i = 0; i <= n; i++)
    {
        printf("%c",Noriginal[i]);
    }
    printf("\n");
    for ( i = 0; i <= 100; i++)
    {
        printf("%c",Ncoded[i]);
    }
    printf("\n");
    for ( i = 0; i <= n; i++)
    {
        printf("%c",Ndecoded[i]);
    }
    printf("\n");
    return 0;
}
