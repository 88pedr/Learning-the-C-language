/* faça um algoritmo que leia um intervalo fechado [x,y] e informe todos os numeros primos contido no intervalo*/

#include <stdio.h>
void main(){
    int x,y,qtde;
    char resp;
    do{
        printf("Informe um intervalo fehcado [x,y]:");
        scanf("%d%d",&x,&y);
        if(x>y){
            int aux=x;
            x=y;
            y=aux;
        }
        for(int num=x;num<=y;num++){
            qtde=0;
            for(int divisor=1;divisor<=num;divisor++);
                if(num%dividosr==0)qtde++;
            if(qtde==2)printf("%d é primo!",num);
        }
        printf("deseja verificar um novo numero?\n");
        scanf("%c",&resp);
    }while((resp=='S')||(resp=='s'));
}