#include <stdio.h>

int s,m=0,h=0;

void main(){
    printf("Introduza o numero de segundos:\n");
    scanf("%d", &s);
    if(s >= 60){
        m=s/60;
        s= s%60;
        if(m >= 60){
            h=m/60;
            m=m%60;
        }
    }
    printf("%d horas %d minutos %d segundos \n", h, m,s);

};
