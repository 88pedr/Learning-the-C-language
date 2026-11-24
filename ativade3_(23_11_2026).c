/*
uma eleição possui 3 candidatos, identificados pelos numeros 1,2 e 3 faça um algoritmo que leia voto a voto ate que seja digitado 0 ao final apresente a quantidade de votos que cada candidator obteve
*/
#include <stdio.h>
void main(){
    int n,presidente1,presidente2,presidente3;
    do{
    printf("Diga-me o seu candidatos do seu voto\n1-presidente1\n2-presidente2\n3-presidente3\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            presidente1++;
            break;
        case 2:
            presidente2++;
            break;
        case 3:
            presidente3++;
            break;
        default:
            printf("Voto não sera contabilizado...Numero invalido\n");
    }
    }while(n!=0);
    if (presidente1>presidente2&&presidente1>presidente3){
        printf("O presidente1 é o vencedor\n");
    }else if(presidente2>presidente1&&presidente2>presidente3){
        printf("O presidente 2 é o vencedor\n");
    }else if(presidente3>presidente2&&presidente3>presidente1){
        printf("O presidente 3 é o vencedor\n");
    }else{
        printf("Empate\n");
    }
    printf("Presidente 1: %d votos\nPresidente 2: %d votos\nPresidente 3: %d votos\n",presidente1,presidente2,presidente3);
}