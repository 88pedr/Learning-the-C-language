/*
Exercício 12. MDC e MMC (1,0 pt)

Leia dois inteiros positivos (repita a leitura enquanto algum deles for ≤ 0). Calcule
o MDC pelo algoritmo de Euclides — enquanto o resto da divisão de a por b não for zero, faça a ← b e b ← resto — e, depois, o MMC, usando a relação MMC(a, b) = a · b/MDC(a, b)
. Mostre também quantas iterações o algoritmo executou.
Valores: 84 36
MDC = 12 (2 iteracoes) | MMC = 252
*/
#include <stdio.h>
void main(){
    int a=-1,b=-1,resto,aux,iteracao1=1,mmc;
    while(a<1||b<1){
        printf("Diga-me dois numero inteiro positivos:\n");
        scanf("%d%d",&a,&b);
    }
    //para evitar criação de mais variavel para guardar valores iniciais mostro elas logos
    try:
    printf("Valores: %d %d\n",a,b);
    mmc=a*b;
    if(a<b){
        aux=a;
        a=b;
        b=aux;
    }
    while(a%b!=0){
        resto=a%b;
        a=b;
        b=resto;
        iteracao1++;
    }
   printf("MDC = %d (%d Iterações) | MMC é %d",b,iteracao1,mmc/b);
}
