/*
faça um algoritmo que leia um numero inteiro nao negativo e calcule a some de seus digitos 
ex: 5075 .: soma=17 . dica: usem divisao inteira e resto da divisão
*/
#include <stdio.h>
#define div 10
void main(){
    int n,digito_ultimo,soma;
    printf("Diga-me um numero inteiro não negativo\n");
    scanf("%d",&n);
    while(n<0){
    if (n<0)printf("NUMERO NAO NEGATIVO\n");
    printf("Vá tente novamente mais de maneira correta\n");
    scanf("%d",&n);
    }
    while (n>0){
        digito_ultimo = n%div;
        n = n/div;
        soma+=digito_ultimo;
    }
    printf("A soma dos digitos é: %d\n",soma);
}