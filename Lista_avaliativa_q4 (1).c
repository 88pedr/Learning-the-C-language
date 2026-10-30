/*Analise o trecho abaixo, que lê dois inteiros a e b :
1 if (a > b)
2   if (a % 2 == 0)
3       printf("A");
4   else
5       printf("B");
6 else if (a == b)
7       printf("C");
8 else
9       printf("D");
10 if (a = 0)
11      printf("E");
12 printf("F\n");
*/
//PERGUNTAS
/*
a) Qual a saída para as entradas (8,3) , (7,3) , (5,5) e (2,9) ?
b) A qual if pertence o else da linha 4? Justifique e reescreva o trecho usando
chaves para deixar isso explícito.
c) A linha 10 contém um erro clássico. Explique o que acontece, por que E nunca
é impresso e qual o valor de a após essa linha.
*/


#include <stdio.h>
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a > b){
        if (a % 2 == 0){
        printf("A");
        }else printf("B");
    }else if (a == b){
            printf("C");
    }else printf("D");
    if (a = 0) printf("E");
    printf("F\n");
}

/*
LETRA A= [8,3] = AF; [7,3]= BF;[5,5]=CF;[2,9]=DF
LETRA B=  o else da 4 linha pertence ao if da linha 2
if (a > b){
        if (a % 2 == 0){
        printf("A");
        }else printf("B");
    }...
LETRA c= o erro classico é que = não tem valor lógico de comparação, ele atribui um valor à algo. o valor de a após está linha de codigo é ZERADA pós a vai receber 0 como seu novo valor.
 */