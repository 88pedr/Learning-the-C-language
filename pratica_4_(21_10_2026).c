/*Faça um algoritmo que leia o numero do mes e informe o seu nome.*/
#include <stdio.h>
void main(){
    int n1;
    printf("Eae fale um numero para o mês\n");
    scanf("%d",&n1);
    (n1==1)?printf("Janeiro"):
    (n1==2)?printf("Fevereiro"):
    (n1==3)?printf("Março"):
    (n1==4)?printf("Abril"):
    (n1==5)?printf("Maio"):
    (n1==6)?printf("Junho"):
    (n1==7)?printf("Julho"):
    (n1==8)?printf("Agosto"):
    (n1==9)?printf("Setembro"):
    (n1==10)?printf("Outubro"):
    (n1==11)?printf("Novembro"):
    (n1==12)?printf("Dezembro"):
    printf("Este numero não é valido");
}
//na segunda parte da aula ela sinalizou que vai ensinar switch para melhor construção