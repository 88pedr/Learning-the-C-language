/*
faça um algoritmo que leia dois numeros inteiros positivos e calcule e finfrome o maximo divisor comum MDC e o minimo multiplo comum
*/
#include <stdio.h>
void main(){
    int n1=-1,n2=-1,mmc,aux,resto;
    char resp='s';
    do{
        printf("Diga-me dois que vou falar o MDC e MMC deles\n");
        scanf("%d%d",&n1,&n2);
        printf("Os valores %d %d\n",n1,n2);
        
        mmc=n1*n2;
        if (n1<n2){
            aux=n1;
            n1=n2;
            n2=aux;
        }
        
        while(n1%n2!=0){
            resto=n1%n2;
            n1=n2;
            n2=resto;
        }
        printf("\no MDC é %d e O mmc é %d\n",n2,mmc/n2);

        printf("Deseja continuar?s-sim\n");
        scanf(" %c",&resp);
    }while(resp=='s'||'S');
}
//for(int i=n1;i<=(x*y);i++){
    if(x%1 == 0)&& (y%i==0)
            
        