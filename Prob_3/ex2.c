/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_mat(int m,int n,int matriz[10][10]){
    int i,j;
    for ( i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void load_mat(int *pointn,int *pointm, int matriz1[][10], int matriz2[][10]){
    int i,j;
    do{
        printf("Introduza m:");
        if(scanf("%d",pointm)!=1){
            printf("Failled to read STDIN!\n");
            exit(0);
        }
    } while (*pointm>10);
    do{
        printf("Introduza n:");
        if(scanf("%d",pointn)!=1){
            printf("Failled to read STDIN!\n");
            exit(0);
        };
    } while (*pointn>10);

    for ( i = 0; i < *pointm; i++){
        for (j = 0; j < *pointn; j++){
            printf("Introduza o valor da coluna %d e linha %d da matriz 1: ",j+1,i+1);
            if(scanf("%d",&matriz1[i][j])!=1){
                printf("Failled to read STDIN!\n");
                exit(0);
            }
        }
    }

    for ( i = 0; i < *pointm; i++){
        for (j = 0; j < *pointn; j++){
            printf("Introduza o valor da coluna %d e linha %d da matriz 2: ",j+1,i+1);
            if(scanf("%d",&matriz2[i][j])!=1){
                printf("Failled to read STDIN!\n");
                exit(0);
            }
        }
    }
}

void sum_mat(int n,int m, int matriz1[][10], int matriz2[10][10]){
    int i,j;
    for ( i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            matriz1[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
}


int main(){
    int n,m;
    int *pointn=&n;
    int *pointm=&m;
    int matriz1[10][10];
    int matriz2[10][10];

    load_mat(pointn,pointm,matriz1,matriz2);
    print_mat(m,n,matriz1);
    printf("\n");
    print_mat(m,n,matriz2);
    printf("\n");
    sum_mat(n,m,matriz1,matriz2);
    print_mat(m,n,matriz1);
    printf("\n");


    return 0;
}
