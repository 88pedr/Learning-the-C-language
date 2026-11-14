/*
Sem executar no computador, determine a saída exata do trecho abaixo, montando

uma tabela com os valores de i , j e cont a cada iteração. Depois, confira execu-
tando o código.

1 int i, j, cont = 0;
2 for (i = 1; i <= 4; i++) {
3 for (j = 1; j <= 4; j++) {
4 if (j == i) continue;
5 if (i + j > 6) break;

Profa Ana Carolina Sokolonski • carolsoko@ifba.edu.br 4

Linguagem de Programação I — ESP206 IFBA – Feira de Santana

6 cont++;
7 printf("(%d,%d) ", i, j);
8 }
9 printf("\n");
10 }
11 printf("cont = %d\n", cont);
a) Qual a saída completa?
b) Que diferença haveria na saída se o break da linha 5 fosse trocado por continue ?
 */


//a) seria

//1,2 1,3 1,4
//2,1 2,3 2,4
//3,1 3,2 
//4,1 4,2
//cont = 10

//b) ele mostraria :
//1,2 1,3 1,4
//2,1 2,3 2,4
//3,1 3,2 
//4,1 4,2 
//cont = 10
//mas continue ele ignora apenas a linha dele especifica enquanto o break ele sai do laço de repetição dele para parametros ate 100 deixaria o programa muito lento usando continue



#include <stdio.h>
void main(){
    int i, j, cont = 0;
     for (i = 1; i <= 4; i++) {
         for (j = 1; j <= 4; j++) {
             if (j == i) continue;
             if (i + j > 6) break;
            cont++;
             printf("(%d,%d) ", i, j);
             }
         printf("\n");
         }
     printf("cont = %d\n", cont);
}