/*Faça um algoritmo que leia um numero inteiro e informe se ele é posivo, negativo ou nulo*/
#include <stdio.h>

void main(){
    int num;
    printf("Informe um número inteiro:");
    scanf("%d",&num);
    if (num>0) printf("Positivo!\n");
    else if (num<0) printf("Negativo\n");
    else printf("Nulo!");
}
//vapo