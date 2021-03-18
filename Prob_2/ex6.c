/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
6. Desenvolva um programa para gerar vários números aleatórios e escrevê-los no ecrã*/


#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <time.h> 

void repete(int size,int upper,int lower);
void nRepete(int size,int upper,int lower);

int main(int argc, char *argv[]){
    int opt = 0;
    int r=0,R=0;
    char *n,*m,*M;
    time_t t;
    srand((unsigned) time(&t));

    while ((opt = getopt(argc, argv, "n:m:M:rR")) != -1) {
        switch (opt)
        {
        case 'n':
            n = optarg;
            if(atoi(n)<0 || atoi(n)>=10)
            {
                printf("Erro tamanho invalido\n");
                exit(0);
            }
        break;

        case 'm':
            m = optarg;
        break;

        case 'M':
            M = optarg;
            if(atoi(M)<=atoi(m)){
                printf("Erro M tem de ser maior que m\n");
                exit(0);
            }
        break;

        case 'r': 
            r=1;
        break;

        case 'R':
            R=1;
        break;
        default:
            printf("Erro de introducao\n");
            exit(0);
        break;
        }
    }
    if (r==R)
    {
        if (r=1)
        {
            printf("Introduza apenas -R ou -r\n");
            exit(0);
        }
        else {
            printf("Erro\n");
            exit(0);
        }
    }

    if (r==1)
    {   
        if (atoi(n)>(atoi(M)-atoi(m)))
        {
            printf("Erro\n");
            exit(0);
        }
        
        nRepete(atoi(n), atoi(M), atoi(m));
    }
    else
    {
        repete(atoi(n), atoi(M), atoi(m));
    }
    return 0;
}


void repete(int size,int upper,int lower){
    int nmr;
    for (int i = 0; i < size; i++)
    {
        nmr=(rand() % (upper + 1 - lower ) + lower);
        printf("%d\n",nmr);
    }
}

void nRepete(int size,int upper,int lower){
    int nmrt[size],x, prt,j=0;

    for(int i=0;i<size;i++){
        nmrt[i]=(rand() % (upper + 1 - lower ) + lower);
    }

    while(j<size){
        int r=(rand() % (upper + 1 - lower ) + lower);

        for (x = 0; x < j; x++)
        {
            if(nmrt[x]==r){
                break;
            }
        }
        if(x==j){
            nmrt[j++]=r;
        }
    }
    for(prt=0;prt<size;prt++){
        printf("%d\n", nmrt[prt]);
    }
}