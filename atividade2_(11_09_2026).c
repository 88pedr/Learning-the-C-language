/*AULA 11/09/2026
leia um intervalor [x,y] e ifnrome todos os numeros primos contido nele. para os nao primos liste seus dividores
*/

#include <stdio.h>
void main(){
    int a,b,aux;
    printf("Digame dois numero inteiros para os intervalor x e y\n");
    scanf("%d%d\n",&a,&b);
    if (a>b){
        aux=a;
        a=b;
        b=aux;
    }
    for(int i=a,y=b;i<y;i++){
        if (i==1){printf("Não é primo %d\n",i);}
        else if (i%i==0 && i%1==0 && i%(i+1)!=0){
            printf("Este é um numero primo %d\n",i);
        }else{
            printf("Nao é primo %d\n",i);
            }
    }
}