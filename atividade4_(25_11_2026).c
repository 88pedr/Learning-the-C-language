/*
faça um algoritmo que leia um nuemro inteiro e informe o fatorial desse numero 
*/
#include <stdio.h>
void main(){
    int n1,fatorial=1;
    char resp='s';
    do{
    printf("Diga-me um numero inteiro e vou ti dizer o fatorial desse numero\n");
    scanf("%d",&n1);
    if (n1>0){
        printf("Numero invalido na proxima coloque um correto");
        return;
    }
    for(int i=1;i<n1;i++){
        fatorial+= fatorial*i;
    }
    printf("A fotorial do seu numero é %d\n",fatorial);
    printf("\nQuer continuar?\nS-sim\nQualquer outra tecla-Sair\n");
    scanf(" %c",resp);
    }while(resp=='s'||resp=='S');
}