/*
Faça um algoritmo que leia um numero inteiro positivo e mostre o seu correspondete em binario Ex: 13, saida 1101
*/
#include <stdio.h>
void main(){
    int binario,multiplicador=1,resto,bi;
    printf("Diga-me um numero eu converte ele me binario");
    scanf("%d",&binario);
    printf("O numero %d convertido fica:",binario);
     for(;binario>0;binario/=2){
        resto=binario%2;
        bi+=(resto*multiplicador);
        multiplicador*=10;
    }
    //sim ja fiz isso na lista avaliativa mas ela fica passando atividade parecida na sala...
    printf("%d",bi);
}
