/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    FILE *filePointer ;
    int size=0;
    int i=0;
    char c;
    char p1[500]={0};
    char p2[500]={0};


    filePointer = fopen("ex4.txt", "r") ;
    

    printf("Introduza uma palavra:\n");
    if (scanf("%s",&p1) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }

    if (filePointer == NULL)
    {
        printf("Não conseguiu abrir o ficheiro ex4.txt");
        exit(0);
    }



    for (c = getc(filePointer); c != EOF; c = getc(filePointer)){
        if (c!='\n')
        {   
            p2[i]=c;
            i++;
        }else{
            if (strcmp(p1,p2)==0)
            {
                printf("palavra encontrada");
                exit(0);
            }
            i=0;
            for ( int j = 0; j < 500; j++)
            {
                p2[j]=0;
            }
        }
    }
    fclose(filePointer);
}