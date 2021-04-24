/*  Feito por: Henrique Alves Pocinho
                    IST199952
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * my_strrchr(char *str, char c){
    int size = strlen(str);
    int j;
    char *savechar=NULL;

    
    for ( j = 0; j < size; j++)
    {   
        
        if (*(str+j)==c)
        {
            savechar=str+j;
        }
        
    }
    return savechar;
}


void main(){
    char string[] = "cadela";
    char c = 's';
    char *csearched;
    csearched=my_strrchr(string,c);
    printf("%c\n",csearched);
}