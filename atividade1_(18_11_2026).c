/*
Leia N numeros e ao final calcule e exiba:
-media aritimetica dos valores lidos
-quantidade de valores positivos e de valores negativos
-percentual de valores positivos e negativos em relação ao total
apos cada numero digitado pergunte ao usuario se deseja continuar ou encerrar exiba os resultados apenas quando o usarios optar por parar, use percentual= (quantidade/total)*100
*/
#include <stdio.h>
void main(){
    int cont=1,negativos,positivos;
    float n,soma=0,media,percentualP,percentualN;
    char resp='s';
    do{
    printf("Diga-me quantos numeros quiser\n");    
    scanf("%f",&n);
    soma+=n;
    media = soma/cont;
    if (n>0){
        positivos++;
    }else if(n==0){
        //sim nada acontece para nao salvar 0 como negativo
    }else{negativos++;}
    percentualP=(positivos/cont)*100;
    percentualN=(negativos/cont)*100;
    printf("Deseja continuar colocando numero?");
    scanf("%c",resp);
    cont++;
    }while(resp=='s'||resp=='S');
    printf("A quantidade de numeros positivos é: %d\nA quantidade de numeros negativos é : %d\nA media aritimetica é : %d\nA porcenteagem de positivos em relação ao total é: %d%%\nA porcentagem de negativos em relação ao total é de : %d%%\n",positivos,negativos,media,percentualP,percentualN);//poderia economizar nas variaveis fazendo o calculo direto no printf, mas pessoalmente não acho nada elegante
    if (soma==0){printf("\nVocê não colocou numeros valido");}

}