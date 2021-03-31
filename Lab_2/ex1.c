#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int nmr1,nmr2,input,flag=1;
    srand(time(NULL));
    do
    {
        nmr1=((rand()%8)+1);
        nmr2=((rand()%8)+1);
        do
        {   
            printf("Qual e o resultado de %d x %d ?\n",nmr1,nmr2);
            if (scanf("%d", &input) != 1){
                printf("Failled to read STDIN!\n");
                exit(0);
            }
            if (input != (nmr1*nmr2)&&input != 0)
            {
                printf("Valor errado, tente novamente\n");
            }
        } while (input != (nmr1*nmr2) && input != 0);

        if (input == 0)
        {
            printf("Adeus ;-;\n"); 
            flag=0;
        
        }
        else{
            printf("Acertou!\n");
        }
        
        
    } while (flag==1);
    
    
    
    return 0;   
}