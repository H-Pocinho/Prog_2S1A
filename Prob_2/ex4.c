/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
4. Desenvolva um programa que lê diversos caracteres do teclado e escreve-os no ecrã, mas
convertendo todas as letras minúsculas para maiúsculas. A leitura termina ao fim de uma
linha (isto é, quando o utilizador premir a tecla <ENTER>). Escreva uma função para
converter cada letra minúscula para maiúscula. */


#include <stdio.h>
#include <stdlib.h>

char linha[150];
int size=0;

char nM(char letra);

int main(){
    printf("Introduza os caracteres\n");
    if (scanf("%s", &linha) != 1){
        printf("Failled to read STDIN!\n");
        exit(0);
    }
    while (linha[size] != '\0'){
        size++;
    }
    
    for (int i = 0; i < size; i++)
    {
        linha[i]=nM(linha[i]);
    }   
    printf("%s\n",linha);
    
    return 0;
}

char nM(char letra){
    if ( (letra >= 97) && (letra <= 122) )
        {
            letra=letra - 32;
        }
    return letra;

}