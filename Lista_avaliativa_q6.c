/*
Exercício 6.
 Ordenando três valores (1,0 pt)
Leia três números inteiros e exiba-os em ordem crescente e, em seguida, em ordem
decrescente, usando somente estruturas de seleção (sem laços e sem vetores). Informe
também qual é o valor mediano. O programa deve funcionar corretamente quando
houver valores repetidos.
*/
#include <stdio.h>
void main(){
  int n1,n2,n3,aux;
  printf("Diga-me 3 numeros\n");
  scanf("%d%d%d",&n1,&n2,&n3);
  if(n1<n2){
    aux=n2;
    n2=n1;
    n1=aux;
  }
  if(n1<n3){
    aux=n1;
    n1=n3;
    n3=aux;
  }
  if(n2<n3){
    aux=n2;
    n2=n3;
    n3=aux;
  }
  printf("Do maior para o menor: %d %d %d\n",n1,n2,n3);
  printf("Do menor para o maior: %d %d %d\n",n3,n2,n1);
  printf("O mediano é %d",n2);
}