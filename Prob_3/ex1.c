/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void limpaStdin(void){
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


void load_vect(char str_vect[][25],int *pointN){
    int i=0,j=0;
    
    do{
        printf("Introduza N: ");
        if (scanf("%d", pointN) != 1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
    } while (*pointN>10);
    limpaStdin();
    for ( i = 0; i < *pointN; i++){
        gets(str_vect[i]);
    }
}




void sort_vect(int N,char str_vect[][25]){
    int i;
    int j; 
    char temp[25]={0};
    for(i=0;i<=N;i++){
      for(j=i+1;j<=N;j++){
         if(strcmp(str_vect[i],str_vect[j])>0){
            strcpy(temp,str_vect[i]);
            strcpy(str_vect[i],str_vect[j]);
            strcpy(str_vect[j],temp);
         }
      }
    }
}


void print_vect(char str_vect[10][25],int N){
    int i=0,j=0;
    printf("\n");
    for ( i = 0; i <= N; i++){ 
        puts(str_vect[i]);
        printf("\n");
    }
    
}


void main(){
    int N;
    int *pointN= &N;
    char str_vect[11][25]={0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            str_vect[i][j]=0;
        }
        
    }
    
    load_vect(str_vect,pointN);
    sort_vect(N,str_vect);
    print_vect(str_vect,N);
    
    return;
}