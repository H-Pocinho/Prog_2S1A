/*  Feito por: Henrique Alves Pocinho
                    IST199952
                    
5. Se n e n+2 são números primos, então dizem-se primos casados. Escreva uma função
eprimo que tenha um argumento inteiro e que retorne 1 se o argumento é primo e 0 caso
contrário. Invoque essa função no main para calcular todos os pares de números primos
casados inferiores a 1000 e imprima esses valores. */


#include <stdio.h>
#include <stdlib.h>

int n;

int eprimo(int n);

int main(){
    for (int i = 1; i <= 1000; i++)
    {
        if (eprimo(i) == 1)
        {
            if (eprimo(i+2)==1)
            {
                printf("%d e %d sao primos casados\n",i,i+2);
            }
            
        }
        
    }
    
    return 0;
}


int eprimo(int n){
    int i;
    for (i=2; i<n; i++) {
        if (n % i == 0 && i != n) return 0;
    }
    return 1;
}