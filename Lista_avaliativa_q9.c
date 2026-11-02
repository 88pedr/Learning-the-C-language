/*
Exercício 9. Leitura com sentinela (1,0 pt)
Leia as idades de um grupo de pessoas; a leitura termina quando for digitado -1
(o −1 não faz parte dos dados). Idades fora de [0, 120] devem ser ignoradas com
aviso. Ao final, exiba: quantidade de idades válidas, média, maior e menor idade e o
percentual de pessoas com 18 anos ou mais. Se nenhuma idade válida for informada,
exiba Nenhum dado informado (evite divisão por zero!).
*/
#include <stdio.h>
#define percent 100
#define condition 18
//me pergunto se const tambmém n faria um otimo trabalho
void main(){
  int resp,maior,menor,total,idade,total_n;
  float media;
  printf("Diga-me sua idade\n");
   scanf("%d",&resp);
   maior=resp;
   menor=resp;
  while(resp!=-1){
    if(resp<0||resp>120){
      maior+=0;
      menor+=0;
      total+=0;
    }else if(resp==-1)break;
    else{
      if (resp>=condition){
          idade++;
          if(maior<resp)maior=resp;
          if(resp<menor)menor=resp;
          total++;
          total_n+=resp;
      }else{
          if(maior<resp)maior=resp;
          if(resp<menor)menor=resp;
          total++;
          total_n+=resp;
      }
    }
  printf("Diga-me sua idade\n");
  scanf("%d",&resp);
  }
  printf("A quantidade de idade validas foram: %d\nA media da idade foi de %.1f\nA maior idade foi de %d\nA menor idade foi de %d\nO porcentual de idade acimas de 18 foi de: %.0f%%",total,media=total_n/total,maior,menor,resp=(idade*percent)/total);
}
