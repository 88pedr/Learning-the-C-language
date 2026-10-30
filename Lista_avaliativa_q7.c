/*
Exercício 7.
 Tabuada nas três formas (1,0 pt)
Leia um inteiro N e exiba sua tabuada de 1 a 10 no formato 7 x 3 = 21 (use %2d
e %3d para alinhar). Escreva três versões no mesmo programa: uma com for ,
uma com while e uma com do-while . Em comentário, explique em que situação
do-while e while se comportariam de forma diferente.
*/
#include <stdio.h>
void main(){
  int n1,cont,cont2;
  printf("Diga-me um numero inteiro:\n");
  scanf("%d\n",&n1);
  printf("Tabuada de %d\n",n1);
  //while
  printf("\nUsando WHILE\n");
  while (cont<11){
    printf("%2d x %2d = %3d\n",n1,cont,n1*cont);
    cont++;
  }
  //for
  printf("\nUsando FOR\n");
  for(int i=0;i<11;i++){
    printf("%2d x %2d = %3d\n",n1,i,n1*i);
  }
  //do while
  printf("\n Usando DO-WHILE\n");
  do{
    printf("%2d x %2d = %3d\n",n1,cont,n1*cont2);
    cont2++;
  }while(cont2<11);
}