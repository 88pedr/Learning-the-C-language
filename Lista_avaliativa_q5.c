/*
Considere o trecho abaixo:
1 switch (codigo) {
2 case 1: printf("Cafe\n");
3 case 2: printf("Suco\n"); break;
4 case 3:
5 case 4: printf("Agua\n"); break;
6 default: printf("Invalido\n");
7 }
*/
//PERGUNTAS
/*
a) Qual a saída para código igual a 1, 2, 3, 4 e 7?
b) Reescreva o trecho usando apenas if / else if / else , produzindo exatamente
a mesma saída.
c) Explique por que não é possível escrever diretamente em C um case para a
condição “ nota >= 7.0 ”. Como contornar essa limitação quando se deseja usar
switch para classificar notas inteiras de 0 a 10?
*//*
#include <stdio.h>
void main(){
    int codigo;
    scanf("%d",&codigo);
    switch(codigo){
        case 1:printf("Cafe\n");
        case 2:printf("Suco\n"); break;
        case 3:
        case 4:printf("Agua\n"); break;
        default:printf("Invalido\n");
    }
}
*/
//LETRA A= [CAFE,SUCO];[SUCO];[ÁGUA];[ÁGUA];[INVALIDO]
//LETRA B= 
/*
#include <stdio.h>
void main(){
    int codigo;
    scanf("%d",&codigo);
    if(codigo==1)printf("Cafe\nSuco");
    else if(codigo==2)printf("Suco\n");
    else if(codigo==3||codigo==4)printf("Água");
    else printf("Invalido");
    }
*/
//LETRA C

/*
#include <stdio.h>
void main(){
    float nota;
    scanf("%d",&nota);
    //switch(nota>=7){} nao daria certo pq switch apenas faz comparação booleana 0 ou 1, = ou nao igual

    switch(nota){
        case 10:
        case 9:
        case 8:
        case 7:printf("Aprovado esperto");break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0: printf("Reprovado...");break;
        default:printf("Coloque um dado valido espertinho");
    }
}
*/
//pelo exemplo, no C o switch realiza apenas comparações e não verifica condições lógicas, entendendo apenas 0 ou 1, para contorna isso utilizamos da técnica fall-through, que consiste em não utilizar o break nas condições até chegar naquele que tem a condição break e tera a lógica que iremos querer.